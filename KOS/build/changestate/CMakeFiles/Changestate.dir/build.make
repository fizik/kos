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
CMAKE_COMMAND = /opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/bin/cmake

# The command to remove a file.
RM = /opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/miem/mqtt_subscriber

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/miem/mqtt_subscriber/build

# Include any dependencies generated for this target.
include changestate/CMakeFiles/Changestate.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include changestate/CMakeFiles/Changestate.dir/compiler_depend.make

# Include the progress variables for this target.
include changestate/CMakeFiles/Changestate.dir/progress.make

# Include the compile flags for this target's objects.
include changestate/CMakeFiles/Changestate.dir/flags.make

changestate/CMakeFiles/Changestate.dir/src/changestate.cpp.o: changestate/CMakeFiles/Changestate.dir/flags.make
changestate/CMakeFiles/Changestate.dir/src/changestate.cpp.o: ../changestate/src/changestate.cpp
changestate/CMakeFiles/Changestate.dir/src/changestate.cpp.o: changestate/CMakeFiles/Changestate.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miem/mqtt_subscriber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object changestate/CMakeFiles/Changestate.dir/src/changestate.cpp.o"
	cd /home/miem/mqtt_subscriber/build/changestate && /opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/bin/aarch64-kos-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT changestate/CMakeFiles/Changestate.dir/src/changestate.cpp.o -MF CMakeFiles/Changestate.dir/src/changestate.cpp.o.d -o CMakeFiles/Changestate.dir/src/changestate.cpp.o -c /home/miem/mqtt_subscriber/changestate/src/changestate.cpp

changestate/CMakeFiles/Changestate.dir/src/changestate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Changestate.dir/src/changestate.cpp.i"
	cd /home/miem/mqtt_subscriber/build/changestate && /opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/bin/aarch64-kos-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/miem/mqtt_subscriber/changestate/src/changestate.cpp > CMakeFiles/Changestate.dir/src/changestate.cpp.i

changestate/CMakeFiles/Changestate.dir/src/changestate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Changestate.dir/src/changestate.cpp.s"
	cd /home/miem/mqtt_subscriber/build/changestate && /opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/bin/aarch64-kos-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/miem/mqtt_subscriber/changestate/src/changestate.cpp -o CMakeFiles/Changestate.dir/src/changestate.cpp.s

# Object files for target Changestate
Changestate_OBJECTS = \
"CMakeFiles/Changestate.dir/src/changestate.cpp.o"

# External object files for target Changestate
Changestate_EXTERNAL_OBJECTS =

changestate/Changestate: changestate/CMakeFiles/Changestate.dir/src/changestate.cpp.o
changestate/Changestate: changestate/CMakeFiles/Changestate.dir/build.make
changestate/Changestate: changestate/CMakeFiles/Changestate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/miem/mqtt_subscriber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Changestate"
	cd /home/miem/mqtt_subscriber/build/changestate && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Changestate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
changestate/CMakeFiles/Changestate.dir/build: changestate/Changestate
.PHONY : changestate/CMakeFiles/Changestate.dir/build

changestate/CMakeFiles/Changestate.dir/clean:
	cd /home/miem/mqtt_subscriber/build/changestate && $(CMAKE_COMMAND) -P CMakeFiles/Changestate.dir/cmake_clean.cmake
.PHONY : changestate/CMakeFiles/Changestate.dir/clean

changestate/CMakeFiles/Changestate.dir/depend:
	cd /home/miem/mqtt_subscriber/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/miem/mqtt_subscriber /home/miem/mqtt_subscriber/changestate /home/miem/mqtt_subscriber/build /home/miem/mqtt_subscriber/build/changestate /home/miem/mqtt_subscriber/build/changestate/CMakeFiles/Changestate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : changestate/CMakeFiles/Changestate.dir/depend

