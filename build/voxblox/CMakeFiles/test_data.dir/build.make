# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/donguk/ros_workspace/gbplanner_ws/src/voxblox/voxblox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/donguk/ros_workspace/gbplanner_ws/build/voxblox

# Utility rule file for test_data.

# Include the progress variables for this target.
include CMakeFiles/test_data.dir/progress.make

test_data: CMakeFiles/test_data.dir/build.make
	rm -rf test_data
	mkdir -p test_data
	cp -r /home/donguk/ros_workspace/gbplanner_ws/src/voxblox/voxblox/test/test_data/* test_data/ || :
.PHONY : test_data

# Rule to build all files generated by this target.
CMakeFiles/test_data.dir/build: test_data

.PHONY : CMakeFiles/test_data.dir/build

CMakeFiles/test_data.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_data.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_data.dir/clean

CMakeFiles/test_data.dir/depend:
	cd /home/donguk/ros_workspace/gbplanner_ws/build/voxblox && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/donguk/ros_workspace/gbplanner_ws/src/voxblox/voxblox /home/donguk/ros_workspace/gbplanner_ws/src/voxblox/voxblox /home/donguk/ros_workspace/gbplanner_ws/build/voxblox /home/donguk/ros_workspace/gbplanner_ws/build/voxblox /home/donguk/ros_workspace/gbplanner_ws/build/voxblox/CMakeFiles/test_data.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_data.dir/depend

