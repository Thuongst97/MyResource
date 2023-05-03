#ifndef MYCLASS_H
#define MYCLASS_H

#include "MyClass2.h"
#include <cstddef>
class MyClass {
public:
    MyClass(): obj2(nullptr){}
    MyClass(MyClass2& mob2);
    int add(int a, int b);
    int multiply(int a, int b);
private:
    MyClass2* obj2;
};


#endif // MYCLASS_H
