#include "timer.h"

using namespace std;




void timer::handlerFunction(sigval_t signum) {
    std::cout<<"Timer time out ..."<<endl;
    return ;
}

int timer::createTimer(timer_t *timerid)
{
    sigevent sev;
    pthread_attr_t attr;
    sched_param parm;

    (void)pthread_attr_init(&attr);

    parm.sched_priority = 255;
    (void)pthread_attr_setschedparam(&attr, &parm);

    sev.sigev_notify_attributes = &attr;
    sev.sigev_notify = SIGEV_THREAD;
    sev.sigev_notify_function = handlerFunction;
    sev.sigev_signo = SIGUSR1;

    return timer_create(CLOCK_REALTIME, &sev, timerid);
}

void timer::startTimer(timer_t timerid, time_t start_sec, uint64_t start_nsec, time_t cyclic_sec, uint64_t cyclic_nsec)
{
    itimerspec its;

    /* Start the timer */
    its.it_value.tv_sec = start_sec;
    its.it_value.tv_nsec = static_cast<int32_t>(start_nsec);

    /* for cyclic timer */
    its.it_interval.tv_sec = cyclic_sec;
    its.it_interval.tv_nsec = static_cast<int32_t>(cyclic_nsec);

    (void)timer_settime(timerid, 0, &its, NULL);
}

void timer::setDuration(uint32_t startTimeout, uint32_t cyclicTimeout)
{
    mStartsec = static_cast<time_t>(startTimeout);
    mStartNsec = 0ULL;
    mIntervalSec = static_cast<time_t>(cyclicTimeout);
    mIntervalNsec = 0ULL;
}

void timer::start()
{
    startTimer(mTimerId, mStartsec, mStartNsec, mIntervalSec, mIntervalNsec);
}

int main() {
    timer My_Timer;
    My_Timer.createTimer(&mTimerId);
    My_Timer.setDuration(5, 10);
    My_Timer.start();
    while (1) {
      std::cout<<"loop . . .\n";
      sleep(2);
    }
    return 0;
}
