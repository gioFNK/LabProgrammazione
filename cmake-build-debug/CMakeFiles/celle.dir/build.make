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
include CMakeFiles/celle.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/celle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/celle.dir/flags.make

CMakeFiles/celle.dir/main.cpp.obj: CMakeFiles/celle.dir/flags.make
CMakeFiles/celle.dir/main.cpp.obj: CMakeFiles/celle.dir/includes_CXX.rsp
CMakeFiles/celle.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/celle.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\celle.dir\main.cpp.obj -c C:\Users\giofn\OneDrive\Desktop\celle\main.cpp

CMakeFiles/celle.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/celle.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\giofn\OneDrive\Desktop\celle\main.cpp > CMakeFiles\celle.dir\main.cpp.i

CMakeFiles/celle.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/celle.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\giofn\OneDrive\Desktop\celle\main.cpp -o CMakeFiles\celle.dir\main.cpp.s

CMakeFiles/celle.dir/Cell.cpp.obj: CMakeFiles/celle.dir/flags.make
CMakeFiles/celle.dir/Cell.cpp.obj: CMakeFiles/celle.dir/includes_CXX.rsp
CMakeFiles/celle.dir/Cell.cpp.obj: ../Cell.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/celle.dir/Cell.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\celle.dir\Cell.cpp.obj -c C:\Users\giofn\OneDrive\Desktop\celle\Cell.cpp

CMakeFiles/celle.dir/Cell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/celle.dir/Cell.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\giofn\OneDrive\Desktop\celle\Cell.cpp > CMakeFiles\celle.dir\Cell.cpp.i

CMakeFiles/celle.dir/Cell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/celle.dir/Cell.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\giofn\OneDrive\Desktop\celle\Cell.cpp -o CMakeFiles\celle.dir\Cell.cpp.s

# Object files for target celle
celle_OBJECTS = \
"CMakeFiles/celle.dir/main.cpp.obj" \
"CMakeFiles/celle.dir/Cell.cpp.obj"

# External object files for target celle
celle_EXTERNAL_OBJECTS =

celle.exe: CMakeFiles/celle.dir/main.cpp.obj
celle.exe: CMakeFiles/celle.dir/Cell.cpp.obj
celle.exe: CMakeFiles/celle.dir/build.make
celle.exe: C:/Qt/5.9.9/winrt_x86_msvc2017/lib/Qt5Widgetsd.lib
celle.exe: C:/Qt/5.9.9/winrt_x86_msvc2017/lib/Qt5Guid.lib
celle.exe: C:/Qt/5.9.9/winrt_x86_msvc2017/lib/Qt5Cored.lib
celle.exe: CMakeFiles/celle.dir/linklibs.rsp
celle.exe: CMakeFiles/celle.dir/objects1.rsp
celle.exe: CMakeFiles/celle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable celle.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\celle.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/celle.dir/build: celle.exe

.PHONY : CMakeFiles/celle.dir/build

CMakeFiles/celle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\celle.dir\cmake_clean.cmake
.PHONY : CMakeFiles/celle.dir/clean

CMakeFiles/celle.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\giofn\OneDrive\Desktop\celle C:\Users\giofn\OneDrive\Desktop\celle C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug C:\Users\giofn\OneDrive\Desktop\celle\cmake-build-debug\CMakeFiles\celle.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/celle.dir/depend

