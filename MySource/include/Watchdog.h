#include<map>
#include<string>
class Watchdog{
    public:
    virtual ~Watchdog(){}
    virtual bool heartBeat(int pid);
    virtual void checkWatchdog(int pid);
    virtual bool registerToMonitor(int pid);
    private:
    std::map<int, std::string> mserviceList;
};

