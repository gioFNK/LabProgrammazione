# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\giofn\OneDrive\Desktop\celle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/runAllTests.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/runAllTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/runAllTests.dir/flags.make

test/CMakeFiles/runAllTests.dir/runAllTests.cpp.obj: test/CMakeFiles/runAllTests.dir/flags.make
test/CMakeFiles/runAllTests.dir/runAllTests.cpp.obj: test/CMakeFiles/runAllTests.dir/includes_CXX.rsp
test/CMakeFiles/runAllTests.dir/runAllTests.cpp.obj: ../test/runAllTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/runAllTests.dir/runAllTests.cpp.obj"
	cd /d C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\test && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\runAllTests.dir\runAllTests.cpp.obj -c C:\Users\giofn\OneDrive\Desktop\celle\test\runAllTests.cpp

test/CMakeFiles/runAllTests.dir/runAllTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runAllTests.dir/runAllTests.cpp.i"
	cd /d C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\test && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\giofn\OneDrive\Desktop\celle\test\runAllTests.cpp > CMakeFiles\runAllTests.dir\runAllTests.cpp.i

test/CMakeFiles/runAllTests.dir/runAllTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runAllTests.dir/runAllTests.cpp.s"
	cd /d C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\test && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\giofn\OneDrive\Desktop\celle\test\runAllTests.cpp -o CMakeFiles\runAllTests.dir\runAllTests.cpp.s

# Object files for target runAllTests
runAllTests_OBJECTS = \
"CMakeFiles/runAllTests.dir/runAllTests.cpp.obj"

# External object files for target runAllTests
runAllTests_EXTERNAL_OBJECTS =

test/runAllTests.exe: test/CMakeFiles/runAllTests.dir/runAllTests.cpp.obj
test/runAllTests.exe: test/CMakeFiles/runAllTests.dir/build.make
test/runAllTests.exe: lib/libgtestd.a
test/runAllTests.exe: lib/libgtest_maind.a
test/runAllTests.exe: lib/libgtestd.a
test/runAllTests.exe: test/CMakeFiles/runAllTests.dir/linklibs.rsp
test/runAllTests.exe: test/CMakeFiles/runAllTests.dir/objects1.rsp
test/runAllTests.exe: test/CMakeFiles/runAllTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable runAllTests.exe"
	cd /d C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\runAllTests.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/runAllTests.dir/build: test/runAllTests.exe

.PHONY : test/CMakeFiles/runAllTests.dir/build

test/CMakeFiles/runAllTests.dir/clean:
	cd /d C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\test && $(CMAKE_COMMAND) -P CMakeFiles\runAllTests.dir\cmake_clean.cmake
.PHONY : test/CMakeFiles/runAllTests.dir/clean

test/CMakeFiles/runAllTests.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\giofn\OneDrive\Desktop\celle C:\Users\giofn\OneDrive\Desktop\celle\test C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\test C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\test\CMakeFiles\runAllTests.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/runAllTests.dir/depend

