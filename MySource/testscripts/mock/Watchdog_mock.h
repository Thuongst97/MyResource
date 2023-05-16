

// class MockWatchdog{
// public:
// 	MOCK_METHOD1(heartBeat,bool(int pid));
// 	MOCK_METHOD0(checkWatchdog,void(int pid));
// 	MOCK_METHOD1(registerToMonitor,bool(int pid));
// };

// MockWatchdog*  M_Watchdog;

// bool Watchdog::heartBeat(int pid)  {
// 	return  M_Watchdog->heartBeat(pid);
// }

// void Watchdog::checkWatchdog(int pid)  {
// 	return  M_Watchdog->checkWatchdog(pid);
// }

// bool Watchdog::registerToMonitor(int pid)  {
// 	return  M_Watchdog->registerToMonitor(pid);
// }

#include <gmock/gmock.h>
#include <map>
#include <string>
//#include "Watchdog.h" // Assuming this is the name of your header file

class MockWatchdog : public Watchdog {
public:
    MOCK_METHOD(bool, heartBeat, (int pid), (override));
    MOCK_METHOD(void, checkWatchdog, (int pid), (override));
    MOCK_METHOD(bool, registerToMonitor, (int pid), (override));
};

// bool Watchdog::heartBeat(int pid)  {
// 	return  M_Watchdog->heartBeat(pid);
// }

// void Watchdog::checkWatchdog(int pid)  {
// 	return  M_Watchdog->checkWatchdog(pid);
// }

// bool Watchdog::registerToMonitor(int pid)  {
// 	return  M_Watchdog->registerToMonitor(pid);
// }