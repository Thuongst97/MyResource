#include "../include/myclass/MyClass.h"

MyClass::MyClass(MyClass2& mob2) : obj2(&mob2){}

int MyClass::add(int a, int b) {
    return a + b;
}

int MyClass::multiply(int a, int b) {
    return obj2->multiply(a, b);
}
