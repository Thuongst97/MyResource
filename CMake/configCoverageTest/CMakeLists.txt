cmake_minimum_required(VERSION 3.16)

project(timer_test)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Add Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add flags for gcov coverage analysis
if (CMAKE_COMPILER_IS_GNUCXX)
  set(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
  set(CMAKE_EXE_LINKER_FLAGS "-fprofile-arcs -ftest-coverage")
endif()

# Build test executable
add_executable(timer_test
  timer_test.cpp
  timer.cpp
)

target_link_libraries(timer_test
  ${GTEST_LIBRARIES}
  pthread
)

# Add test target
add_test(NAME timer_test COMMAND timer_test)

# Configure gcov coverage analysis
if (CMAKE_COMPILER_IS_GNUCXX)
  # Generate coverage report in HTML format
  add_custom_target(coverage
    COMMAND ${CMAKE_COMMAND} -E env "GCOV_PREFIX=${PROJECT_BINARY_DIR}/CMakeFiles/timer_test.dir/" "GCOV_PREFIX_STRIP=3" "GCOV_TOOL=gcov" "GCOV_FORMAT=html" gcov -o ${PROJECT_BINARY_DIR} ${PROJECT_SOURCE_DIR}/timer.cpp
    WORKING_DIRECTORY ${PROJECT_BINARY_DIR}
    COMMENT "Generating HTML coverage report..."
  )
endif()

