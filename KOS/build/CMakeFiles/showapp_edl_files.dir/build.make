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
include CMakeFiles/showapp_edl_files.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/showapp_edl_files.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/showapp_edl_files.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/showapp_edl_files.dir/flags.make

_headers_/mosquitto/Showapp.edl.h: Showapp.edl.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/miem/mqtt_subscriber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating _headers_/mosquitto/Showapp.edl.h"
	/opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/bin/cmake -E copy /home/miem/mqtt_subscriber/build/Showapp.edl.h /home/miem/mqtt_subscriber/build/_headers_/mosquitto/../mosquitto/Showapp.edl.h

Showapp.edl.h: _headers_/mosquitto/Showapp.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/miem/mqtt_subscriber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating Showapp.edl.h"
	/opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/bin/nk-gen-c -I /home/miem/mqtt_subscriber/build/_headers_ -I /home/miem/mqtt_subscriber/build/_headers_/mosquitto/.. -I /home/miem/mqtt_subscriber/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.1.0.356/sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/aarch64-kos/include -I /sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/include -P /opt/KasperskyOS-Community-Edition-1.1.0.356/sysroot-aarch64-kos/include/system.platform -I /home/miem/mqtt_subscriber/build/_headers_/mosquitto/../mosquitto /home/miem/mqtt_subscriber/build/_headers_/mosquitto/../mosquitto/Showapp.edl

_headers_/mosquitto/Showapp.edl: ../resources/edl/Showapp.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/miem/mqtt_subscriber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating _headers_/mosquitto/Showapp.edl"
	/opt/KasperskyOS-Community-Edition-1.1.0.356/toolchain/bin/cmake -E copy /home/miem/mqtt_subscriber/resources/edl/Showapp.edl /home/miem/mqtt_subscriber/build/_headers_/mosquitto/../mosquitto/Showapp.edl

showapp_edl_files: CMakeFiles/showapp_edl_files.dir/build.make
.PHONY : showapp_edl_files

# Rule to build all files generated by this target.
CMakeFiles/showapp_edl_files.dir/build: showapp_edl_files
.PHONY : CMakeFiles/showapp_edl_files.dir/build

CMakeFiles/showapp_edl_files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/showapp_edl_files.dir/cmake_clean.cmake
.PHONY : CMakeFiles/showapp_edl_files.dir/clean

CMakeFiles/showapp_edl_files.dir/depend: Showapp.edl.h
CMakeFiles/showapp_edl_files.dir/depend: _headers_/mosquitto/Showapp.edl
CMakeFiles/showapp_edl_files.dir/depend: _headers_/mosquitto/Showapp.edl.h
	cd /home/miem/mqtt_subscriber/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/miem/mqtt_subscriber /home/miem/mqtt_subscriber /home/miem/mqtt_subscriber/build /home/miem/mqtt_subscriber/build /home/miem/mqtt_subscriber/build/CMakeFiles/showapp_edl_files.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/showapp_edl_files.dir/depend
