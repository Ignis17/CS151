# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2017.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2017.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/flags.make

CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj: CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/flags.make
CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj"
	C:\Win-builds\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Joel_Turbi_Lab_5_2_Sat.dir\main.cpp.obj -c "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat\main.cpp"

CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.i"
	C:\Win-builds\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat\main.cpp" > CMakeFiles\Joel_Turbi_Lab_5_2_Sat.dir\main.cpp.i

CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.s"
	C:\Win-builds\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat\main.cpp" -o CMakeFiles\Joel_Turbi_Lab_5_2_Sat.dir\main.cpp.s

CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj.requires

CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj.provides: CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Joel_Turbi_Lab_5_2_Sat.dir\build.make CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj.provides

CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj.provides.build: CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj


# Object files for target Joel_Turbi_Lab_5_2_Sat
Joel_Turbi_Lab_5_2_Sat_OBJECTS = \
"CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj"

# External object files for target Joel_Turbi_Lab_5_2_Sat
Joel_Turbi_Lab_5_2_Sat_EXTERNAL_OBJECTS =

Joel_Turbi_Lab_5_2_Sat.exe: CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj
Joel_Turbi_Lab_5_2_Sat.exe: CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/build.make
Joel_Turbi_Lab_5_2_Sat.exe: CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/linklibs.rsp
Joel_Turbi_Lab_5_2_Sat.exe: CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/objects1.rsp
Joel_Turbi_Lab_5_2_Sat.exe: CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Joel_Turbi_Lab_5_2_Sat.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Joel_Turbi_Lab_5_2_Sat.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/build: Joel_Turbi_Lab_5_2_Sat.exe

.PHONY : CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/build

CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/requires: CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/requires

CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Joel_Turbi_Lab_5_2_Sat.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/clean

CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat" "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat" "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat\cmake-build-debug" "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat\cmake-build-debug" "C:\Users\joelt\Dropbox\Notes\Spring 2017\CS 151\CS 151 Labs\Joel Turbi Lab 5.2 Sat\cmake-build-debug\CMakeFiles\Joel_Turbi_Lab_5_2_Sat.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Joel_Turbi_Lab_5_2_Sat.dir/depend

