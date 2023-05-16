#include<iostream>
#include "../include/HealthManager.h"

#define NORMAL 1
HealthManager::HealthManager() : mWatchdog(nullptr), mPowerManager(nullptr){
    std::cout<<"HealthManager Constructure"<<std::endl;
}

void HealthManager::onInit() {
    std::cout<<"onInit"<<std::endl;
    bool res = false;
    if (mWatchdog != nullptr) {
        res = mWatchdog->registerToMonitor(pid);
    }
    if (res) {
        mark =10;
    }
    mPowerManager = new PowerManager();
}

HealthManager::~HealthManager() {
    delete mWatchdog;
    delete mPowerManager;
}

bool HealthManager::reportException(int exception_case) {
    if (mPowerManager->getPowerState() == NORMAL) {
        std::cout<<"Exception: "<<exception_case<<std::endl;
    }
    return true;
}