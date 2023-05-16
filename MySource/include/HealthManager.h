
#include "PowerManager.h"
#include "Watchdog.h"
#include <vector>

enum exeptionCase : int{
    EXCEPTION_0 =0,
    EXCEPTION_1,
    EXCEPTION_2,
    EXCEPTION_3,
    EXCEPTION_4,
    EXCEPTION_5,
};

std::vector<int> default_Exception{};
class HealthManager{
    public:
    virtual void onInit();
    HealthManager();
    virtual ~HealthManager();
    virtual bool reportException(int exception_case);
    Watchdog * mWatchdog;
    PowerManager* mPowerManager;
    int mark =0;
    private:
    std::vector<int> mExectionList;
    int pid = 1;
    
};