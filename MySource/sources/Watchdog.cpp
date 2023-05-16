#include <iostream>
#include "Watchdog.h"
bool Watchdog::heartBeat(int pid) {
    int result = false;
    for (auto it = mserviceList.begin();it != mserviceList.end();it++) {
        // if (it.first == pid) {
        //     it.second = "OK";
        //     result =true;
        //     break;
        // }
    }
    return result;
}

bool Watchdog::registerToMonitor(int pid) {
    mserviceList[pid] = "OK";
    return false;
}

void Watchdog::checkWatchdog(int pid) {
    bool result = true;
    for (auto it = mserviceList.begin();it != mserviceList.end();it++) {
        // if (it.second != "OK") {
        //     std::cout<<" Watchdog occurr !!!"<<std::endl;
        //     result =false;
        // }
    }
    if (result) {
        std::cout<<"Watchdog check completed!, no error"<<std::endl;
    }
}