cmake_minimum_required(VERSION 3.5)
project(MyProject)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Set source files
set(SOURCES
    src/MyClass.cpp
    src/MyClass2.cpp
)



set(HEADERS
    include/myclass
)

# Set include directories
include_directories(${HEADERS})

# Create libraries
add_library(MyClass SHARED ${SOURCES} ${HEADERS})
add_library(MyClass2 STATIC ${SOURCES} ${HEADERS})

# Create unit test executable
add_executable(MyTest test/MyTest.cpp)
target_link_libraries(MyTest gtest gmock pthread MyClass MyClass2)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
