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
CMAKE_SOURCE_DIR = /home/alexander/juliber_project/lab12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexander/juliber_project/lab12/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab12.dir/flags.make

CMakeFiles/lab12.dir/insertion_sort.cpp.o: CMakeFiles/lab12.dir/flags.make
CMakeFiles/lab12.dir/insertion_sort.cpp.o: ../insertion_sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexander/juliber_project/lab12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab12.dir/insertion_sort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab12.dir/insertion_sort.cpp.o -c /home/alexander/juliber_project/lab12/insertion_sort.cpp

CMakeFiles/lab12.dir/insertion_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab12.dir/insertion_sort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexander/juliber_project/lab12/insertion_sort.cpp > CMakeFiles/lab12.dir/insertion_sort.cpp.i

CMakeFiles/lab12.dir/insertion_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab12.dir/insertion_sort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexander/juliber_project/lab12/insertion_sort.cpp -o CMakeFiles/lab12.dir/insertion_sort.cpp.s

CMakeFiles/lab12.dir/insertion_sort.cpp.o.requires:

.PHONY : CMakeFiles/lab12.dir/insertion_sort.cpp.o.requires

CMakeFiles/lab12.dir/insertion_sort.cpp.o.provides: CMakeFiles/lab12.dir/insertion_sort.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab12.dir/build.make CMakeFiles/lab12.dir/insertion_sort.cpp.o.provides.build
.PHONY : CMakeFiles/lab12.dir/insertion_sort.cpp.o.provides

CMakeFiles/lab12.dir/insertion_sort.cpp.o.provides.build: CMakeFiles/lab12.dir/insertion_sort.cpp.o


# Object files for target lab12
lab12_OBJECTS = \
"CMakeFiles/lab12.dir/insertion_sort.cpp.o"

# External object files for target lab12
lab12_EXTERNAL_OBJECTS =

lab12: CMakeFiles/lab12.dir/insertion_sort.cpp.o
lab12: CMakeFiles/lab12.dir/build.make
lab12: CMakeFiles/lab12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alexander/juliber_project/lab12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab12.dir/build: lab12

.PHONY : CMakeFiles/lab12.dir/build

CMakeFiles/lab12.dir/requires: CMakeFiles/lab12.dir/insertion_sort.cpp.o.requires

.PHONY : CMakeFiles/lab12.dir/requires

CMakeFiles/lab12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab12.dir/clean

CMakeFiles/lab12.dir/depend:
	cd /home/alexander/juliber_project/lab12/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexander/juliber_project/lab12 /home/alexander/juliber_project/lab12 /home/alexander/juliber_project/lab12/cmake-build-debug /home/alexander/juliber_project/lab12/cmake-build-debug /home/alexander/juliber_project/lab12/cmake-build-debug/CMakeFiles/lab12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab12.dir/depend

