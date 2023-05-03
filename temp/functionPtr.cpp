#include <iostream>
#include <vector>

// Define a struct that contains two function pointers
struct FunctionPair {
    void (*func1)(int);
    void (*func2)(int);
};

// Define two example functions that can be called via function pointers
void printDouble(int x) {
    std::cout << "Double of " << x << " is " << 2 * x << std::endl;
}

void printTriple(int x) {
    std::cout << "Triple of " << x << " is " << 3 * x << std::endl;
}

int main() {
    // Create a vector of FunctionPair structs
    std::vector<FunctionPair> funcVec;

    // Add some example function pairs to the vector
    FunctionPair pair1 = { &printDouble, &printTriple };
    FunctionPair pair2 = { &printTriple, &printDouble };
    funcVec.push_back(pair1);
    funcVec.push_back(pair2);

    // Call the first function in each function pair
    for (const auto& pair : funcVec) {
        pair.func1(5);
    }

    // Call the second function in each function pair
    for (const auto& pair : funcVec) {
        pair.func2(10);
    }

    return 0;
}
