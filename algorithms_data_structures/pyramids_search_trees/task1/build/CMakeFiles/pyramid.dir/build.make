# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/build

# Include any dependencies generated for this target.
include CMakeFiles/pyramid.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pyramid.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pyramid.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pyramid.dir/flags.make

CMakeFiles/pyramid.dir/main.cpp.o: CMakeFiles/pyramid.dir/flags.make
CMakeFiles/pyramid.dir/main.cpp.o: /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/main.cpp
CMakeFiles/pyramid.dir/main.cpp.o: CMakeFiles/pyramid.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pyramid.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pyramid.dir/main.cpp.o -MF CMakeFiles/pyramid.dir/main.cpp.o.d -o CMakeFiles/pyramid.dir/main.cpp.o -c /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/main.cpp

CMakeFiles/pyramid.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pyramid.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/main.cpp > CMakeFiles/pyramid.dir/main.cpp.i

CMakeFiles/pyramid.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pyramid.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/main.cpp -o CMakeFiles/pyramid.dir/main.cpp.s

CMakeFiles/pyramid.dir/print_pyramid.cpp.o: CMakeFiles/pyramid.dir/flags.make
CMakeFiles/pyramid.dir/print_pyramid.cpp.o: /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/print_pyramid.cpp
CMakeFiles/pyramid.dir/print_pyramid.cpp.o: CMakeFiles/pyramid.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pyramid.dir/print_pyramid.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pyramid.dir/print_pyramid.cpp.o -MF CMakeFiles/pyramid.dir/print_pyramid.cpp.o.d -o CMakeFiles/pyramid.dir/print_pyramid.cpp.o -c /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/print_pyramid.cpp

CMakeFiles/pyramid.dir/print_pyramid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pyramid.dir/print_pyramid.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/print_pyramid.cpp > CMakeFiles/pyramid.dir/print_pyramid.cpp.i

CMakeFiles/pyramid.dir/print_pyramid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pyramid.dir/print_pyramid.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/print_pyramid.cpp -o CMakeFiles/pyramid.dir/print_pyramid.cpp.s

# Object files for target pyramid
pyramid_OBJECTS = \
"CMakeFiles/pyramid.dir/main.cpp.o" \
"CMakeFiles/pyramid.dir/print_pyramid.cpp.o"

# External object files for target pyramid
pyramid_EXTERNAL_OBJECTS =

pyramid: CMakeFiles/pyramid.dir/main.cpp.o
pyramid: CMakeFiles/pyramid.dir/print_pyramid.cpp.o
pyramid: CMakeFiles/pyramid.dir/build.make
pyramid: CMakeFiles/pyramid.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable pyramid"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pyramid.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pyramid.dir/build: pyramid
.PHONY : CMakeFiles/pyramid.dir/build

CMakeFiles/pyramid.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pyramid.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pyramid.dir/clean

CMakeFiles/pyramid.dir/depend:
	cd /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1 /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1 /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/build /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/build /home/localhost/Desktop/Homeworks/algorithms_data_structures/pyramids_search_trees/task1/build/CMakeFiles/pyramid.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/pyramid.dir/depend

