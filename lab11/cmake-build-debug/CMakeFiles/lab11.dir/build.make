# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/alexander/dev/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/alexander/dev/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alexander/juliber_project/lab11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexander/juliber_project/lab11/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab11.dir/flags.make

CMakeFiles/lab11.dir/main.cpp.o: CMakeFiles/lab11.dir/flags.make
CMakeFiles/lab11.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexander/juliber_project/lab11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab11.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab11.dir/main.cpp.o -c /home/alexander/juliber_project/lab11/main.cpp

CMakeFiles/lab11.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab11.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexander/juliber_project/lab11/main.cpp > CMakeFiles/lab11.dir/main.cpp.i

CMakeFiles/lab11.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab11.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexander/juliber_project/lab11/main.cpp -o CMakeFiles/lab11.dir/main.cpp.s

CMakeFiles/lab11.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/lab11.dir/main.cpp.o.requires

CMakeFiles/lab11.dir/main.cpp.o.provides: CMakeFiles/lab11.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab11.dir/build.make CMakeFiles/lab11.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/lab11.dir/main.cpp.o.provides

CMakeFiles/lab11.dir/main.cpp.o.provides.build: CMakeFiles/lab11.dir/main.cpp.o


# Object files for target lab11
lab11_OBJECTS = \
"CMakeFiles/lab11.dir/main.cpp.o"

# External object files for target lab11
lab11_EXTERNAL_OBJECTS =

lab11: CMakeFiles/lab11.dir/main.cpp.o
lab11: CMakeFiles/lab11.dir/build.make
lab11: CMakeFiles/lab11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alexander/juliber_project/lab11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab11"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab11.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab11.dir/build: lab11

.PHONY : CMakeFiles/lab11.dir/build

CMakeFiles/lab11.dir/requires: CMakeFiles/lab11.dir/main.cpp.o.requires

.PHONY : CMakeFiles/lab11.dir/requires

CMakeFiles/lab11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab11.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab11.dir/clean

CMakeFiles/lab11.dir/depend:
	cd /home/alexander/juliber_project/lab11/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexander/juliber_project/lab11 /home/alexander/juliber_project/lab11 /home/alexander/juliber_project/lab11/cmake-build-debug /home/alexander/juliber_project/lab11/cmake-build-debug /home/alexander/juliber_project/lab11/cmake-build-debug/CMakeFiles/lab11.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab11.dir/depend

