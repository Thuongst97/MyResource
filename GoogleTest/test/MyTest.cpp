#include <iostream>
#include "../include/myclass/MyClass.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace testing;
using ::testing::NiceMock;
class MockMyClass2 : public MyClass2 {
public:
    MOCK_METHOD(int, multiply, (int a, int b), (override));
private:

};

TEST(MyClassTest, AddTest) {
    MyClass obj;
    EXPECT_EQ(obj.add(2, 3), 5);
}

TEST(MyClassTest, MultiplyTest) {
    MockMyClass2 obj2;
    EXPECT_CALL(obj2, multiply(2, 3)).WillOnce(Return(6));

    MyClass obj(obj2);
    
    EXPECT_EQ(obj.multiply(2, 3), 6);
}

int main(int argc, char **argv) {
    InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
