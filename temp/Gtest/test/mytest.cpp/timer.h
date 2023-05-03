//#include <time.h>
#include <bits/stdc++.h>
#include <pthread.h>
#include <csignal>
#include <ctime>
#include <unistd.h>

class timer{
    public:
    void setDuration(uint32_t startTimeout, uint32_t cyclicTimeout);
    void start();
    void startTimer(timer_t timerid, time_t start_sec, uint64_t start_nsec, time_t cyclic_sec, uint64_t cyclic_nsec);
    int createTimer(timer_t *timerid);
    static void handlerFunction(sigval_t signum);
    private:
    time_t mStartsec = 0;
    uint64_t mStartNsec = 0ULL;
    time_t mIntervalSec = 0;
    uint64_t mIntervalNsec = 0ULL;

    timer_t mTimerId = 0;
    int32_t mUserTimerId;

};