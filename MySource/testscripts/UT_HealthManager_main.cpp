


#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <dlfcn.h>

#include "HealthManager.cpp"

#include "PowerManager_mock.h"
#include "Watchdog_mock.h"
using ::testing::_;
using ::testing::A;
using ::testing::AllOf;
using ::testing::Args;
using ::testing::AtLeast;
using ::testing::Combine;
using ::testing::DoAll;
using ::testing::Return;
using ::testing::ReturnRef;
using ::testing::SaveArg;
using ::testing::SaveArgPointee;
using ::testing::SetArgPointee;
using ::testing::SetArrayArgument;
using ::testing::Values;

class HealthManagerTest : public ::testing::Test {
protected:
    virtual void SetUp(){
        testObj = new HealthManager();
    }
    virtual void TearDown(){
        delete testObj;
    }
    HealthManager* testObj;
};

TEST_F(HealthManagerTest, HealthManager_onInit_TC001){
// Please make test script!!
    
    MockWatchdog* mMock_Watchdog = new MockWatchdog();
    testObj->mWatchdog = mMock_Watchdog;
    EXPECT_CALL(*mMock_Watchdog, registerToMonitor(_)).WillOnce(Return(true));
    testObj->onInit();
    EXPECT_EQ(testObj->mark,10);
    //delete mMock_Watchdog;
}

TEST_F(HealthManagerTest, HealthManager_reportException_TC002){
// Please make test script!!
    
    MockPowerManager* mMockPowerManager = new MockPowerManager();
    testObj->mPowerManager = mMockPowerManager;
    EXPECT_CALL(*mMockPowerManager, getPowerState()).WillOnce(Return(10));
    testObj->reportException(1);
    EXPECT_EQ(testObj->mark,10);
    //delete mMock_Watchdog;
}