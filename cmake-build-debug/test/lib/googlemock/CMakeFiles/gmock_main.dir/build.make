# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/giofnk/Documenti/CLion-2019.3.3/clion-2019.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/giofnk/Documenti/CLion-2019.3.3/clion-2019.3.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/giofnk/CLionProjects/originale/LabProgrammazione-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug

# Include any dependencies generated for this target.
include test/lib/googlemock/CMakeFiles/gmock_main.dir/depend.make

# Include the progress variables for this target.
include test/lib/googlemock/CMakeFiles/gmock_main.dir/progress.make

# Include the compile flags for this target's objects.
include test/lib/googlemock/CMakeFiles/gmock_main.dir/flags.make

test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: test/lib/googlemock/CMakeFiles/gmock_main.dir/flags.make
test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: ../test/lib/googlemock/src/gmock_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"
	cd /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/test/lib/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.o -c /home/giofnk/CLionProjects/originale/LabProgrammazione-master/test/lib/googlemock/src/gmock_main.cc

test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/test/lib/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/giofnk/CLionProjects/originale/LabProgrammazione-master/test/lib/googlemock/src/gmock_main.cc > CMakeFiles/gmock_main.dir/src/gmock_main.cc.i

test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/test/lib/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/giofnk/CLionProjects/originale/LabProgrammazione-master/test/lib/googlemock/src/gmock_main.cc -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.s

# Object files for target gmock_main
gmock_main_OBJECTS = \
"CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"

# External object files for target gmock_main
gmock_main_EXTERNAL_OBJECTS =

lib/libgmock_maind.a: test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
lib/libgmock_maind.a: test/lib/googlemock/CMakeFiles/gmock_main.dir/build.make
lib/libgmock_maind.a: test/lib/googlemock/CMakeFiles/gmock_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libgmock_maind.a"
	cd /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/test/lib/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean_target.cmake
	cd /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/test/lib/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/lib/googlemock/CMakeFiles/gmock_main.dir/build: lib/libgmock_maind.a

.PHONY : test/lib/googlemock/CMakeFiles/gmock_main.dir/build

test/lib/googlemock/CMakeFiles/gmock_main.dir/clean:
	cd /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/test/lib/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean.cmake
.PHONY : test/lib/googlemock/CMakeFiles/gmock_main.dir/clean

test/lib/googlemock/CMakeFiles/gmock_main.dir/depend:
	cd /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/giofnk/CLionProjects/originale/LabProgrammazione-master /home/giofnk/CLionProjects/originale/LabProgrammazione-master/test/lib/googlemock /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/test/lib/googlemock /home/giofnk/CLionProjects/originale/LabProgrammazione-master/cmake-build-debug/test/lib/googlemock/CMakeFiles/gmock_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/lib/googlemock/CMakeFiles/gmock_main.dir/depend

