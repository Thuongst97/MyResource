# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thuongst/MySource

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thuongst/MySource/build

# Include any dependencies generated for this target.
include CMakeFiles/PowerManager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PowerManager.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PowerManager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PowerManager.dir/flags.make

CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.o: CMakeFiles/PowerManager.dir/flags.make
CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.o: ../sources/PowerManager.cpp
CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.o: CMakeFiles/PowerManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thuongst/MySource/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.o -MF CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.o.d -o CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.o -c /home/thuongst/MySource/sources/PowerManager.cpp

CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thuongst/MySource/sources/PowerManager.cpp > CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.i

CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thuongst/MySource/sources/PowerManager.cpp -o CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.s

# Object files for target PowerManager
PowerManager_OBJECTS = \
"CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.o"

# External object files for target PowerManager
PowerManager_EXTERNAL_OBJECTS =

libPowerManager.so: CMakeFiles/PowerManager.dir/sources/PowerManager.cpp.o
libPowerManager.so: CMakeFiles/PowerManager.dir/build.make
libPowerManager.so: CMakeFiles/PowerManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thuongst/MySource/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libPowerManager.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PowerManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PowerManager.dir/build: libPowerManager.so
.PHONY : CMakeFiles/PowerManager.dir/build

CMakeFiles/PowerManager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PowerManager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PowerManager.dir/clean

CMakeFiles/PowerManager.dir/depend:
	cd /home/thuongst/MySource/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thuongst/MySource /home/thuongst/MySource /home/thuongst/MySource/build /home/thuongst/MySource/build /home/thuongst/MySource/build/CMakeFiles/PowerManager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PowerManager.dir/depend

