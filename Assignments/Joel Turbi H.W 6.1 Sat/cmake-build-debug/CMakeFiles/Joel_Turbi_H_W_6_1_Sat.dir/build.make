# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/ignis17/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/171.4073.41/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/ignis17/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/171.4073.41/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/flags.make

CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o: CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/flags.make
CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o -c "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/main.cpp"

CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/main.cpp" > CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.i

CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/main.cpp" -o CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.s

CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o.requires

CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o.provides: CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/build.make CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o.provides

CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o.provides.build: CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o


# Object files for target Joel_Turbi_H_W_6_1_Sat
Joel_Turbi_H_W_6_1_Sat_OBJECTS = \
"CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o"

# External object files for target Joel_Turbi_H_W_6_1_Sat
Joel_Turbi_H_W_6_1_Sat_EXTERNAL_OBJECTS =

Joel_Turbi_H_W_6_1_Sat: CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o
Joel_Turbi_H_W_6_1_Sat: CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/build.make
Joel_Turbi_H_W_6_1_Sat: CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Joel_Turbi_H_W_6_1_Sat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/build: Joel_Turbi_H_W_6_1_Sat

.PHONY : CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/build

CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/requires: CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/requires

CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/clean

CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/depend:
	cd "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat" "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat" "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/cmake-build-debug" "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/cmake-build-debug" "/home/ignis17/Dropbox/Notes/Spring 2017/CS 151/CS 151 Labs/Joel Turbi H.W 6.1 Sat/cmake-build-debug/CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Joel_Turbi_H_W_6_1_Sat.dir/depend
