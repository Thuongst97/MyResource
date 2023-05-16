
cmake_minimum_required(VERSION 2.8)

#1. Config Environment

#2. set defines
ADD_DEFINITIONS (
	-DHAVE_CONFIG_H
)

#3. set c cxx flags
#   <specify the flags, if you want to perform coverage test, set flags: -fprofile-arcs, -ftest-coverage

ADD_COMPILE_OPTIONS (
	-Wall
	-Wno-unused-parameter
	-std=c++11
	-funwind-tables
	-Werror=return-type
	-g
	-O0
	-fPIC
)

#4. set include paths
#   <INCLUDE_DIRECTORIES is where your source file are located>

INCLUDE_DIRECTORIES (
    /home/thuongst/MySource/sources
    /home/thuongst/MySource/include
    /home/thuongst/MySource/testscripts/mock
    /home/thuongst/MySource/lib
)
#5. set link directory
#   <You need to specify the path to needed libraries (.so)>
link_directories(
    /home/thuongst/MySource/lib
)

# set target properties (output)
SET(
	CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)


#=================================================================================================

# Set source files
set(PowerManager_Source
    /home/thuongst/MySource/sources/PowerManager.cpp
)

set(PowerManager_HEADERS
    /home/thuongst/MySource/include
)

# Set include directories
include_directories(${PowerManager_HEADERS})

# Create libraries
add_library(PowerManager SHARED ${PowerManager_Source} ${PowerManager_HEADERS})


install(TARGETS PowerManager DESTINATION /home/thuongst/MySource/lib )

set(Watchdog_Source
    /home/thuongst/MySource/sources/Watchdog.cpp
)

set(Watchdog_HEADERS
    /home/thuongst/MySource/include
)

# Set include directories
include_directories(${PowerManager_HEADERS})

# Create libraries
add_library(Watchdog SHARED ${Watchdog_Source} ${Watchdog_HEADERS})


install(TARGETS Watchdog DESTINATION /home/thuongst/MySource/lib )

# install_targets(TARGETS HealthManagerPolicy DESTINATION /home/worker/TIGER/apps_proc/lge/services/health-variant/policy/unitttests/lib )
#==================================================================================================



SET ( UT_HealthManager_Test_SRC_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/testscripts/gtest_main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/testscripts/UT_HealthManager_main.cpp
)

add_executable ( UT_HealthManager ${UT_HealthManager_Test_SRC_FILES} )

# set library for each target
target_link_libraries( UT_HealthManager
    PowerManager
    Watchdog
	pthread
	gtest
	gmock
	stdc++
)

