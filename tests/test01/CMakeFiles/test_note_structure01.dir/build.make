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
CMAKE_SOURCE_DIR = /home/nekita/TP/TODOshnick/project_sources

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nekita/TP/TODOshnick/tests/test01

# Include any dependencies generated for this target.
include CMakeFiles/test_note_structure01.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_note_structure01.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_note_structure01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_note_structure01.dir/flags.make

CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.o: CMakeFiles/test_note_structure01.dir/flags.make
CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.o: /home/nekita/TP/TODOshnick/project_sources/starts/test_note_structure.cpp
CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.o: CMakeFiles/test_note_structure01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nekita/TP/TODOshnick/tests/test01/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.o -MF CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.o.d -o CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.o -c /home/nekita/TP/TODOshnick/project_sources/starts/test_note_structure.cpp

CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nekita/TP/TODOshnick/project_sources/starts/test_note_structure.cpp > CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.i

CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nekita/TP/TODOshnick/project_sources/starts/test_note_structure.cpp -o CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.s

# Object files for target test_note_structure01
test_note_structure01_OBJECTS = \
"CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.o"

# External object files for target test_note_structure01
test_note_structure01_EXTERNAL_OBJECTS =

test_note_structure01: CMakeFiles/test_note_structure01.dir/starts/test_note_structure.cpp.o
test_note_structure01: CMakeFiles/test_note_structure01.dir/build.make
test_note_structure01: src/notes/libnotes.so
test_note_structure01: CMakeFiles/test_note_structure01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nekita/TP/TODOshnick/tests/test01/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_note_structure01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_note_structure01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_note_structure01.dir/build: test_note_structure01
.PHONY : CMakeFiles/test_note_structure01.dir/build

CMakeFiles/test_note_structure01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_note_structure01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_note_structure01.dir/clean

CMakeFiles/test_note_structure01.dir/depend:
	cd /home/nekita/TP/TODOshnick/tests/test01 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nekita/TP/TODOshnick/project_sources /home/nekita/TP/TODOshnick/project_sources /home/nekita/TP/TODOshnick/tests/test01 /home/nekita/TP/TODOshnick/tests/test01 /home/nekita/TP/TODOshnick/tests/test01/CMakeFiles/test_note_structure01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_note_structure01.dir/depend

