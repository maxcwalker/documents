# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /mainfs/local/software/cmake/3.24.1/install/bin/cmake

# The command to remove a file.
RM = /mainfs/local/software/cmake/3.24.1/install/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build

# Include any dependencies generated for this target.
include CMakeFiles/OpenSBLI_seq.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/OpenSBLI_seq.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenSBLI_seq.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenSBLI_seq.dir/flags.make

CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.o: CMakeFiles/OpenSBLI_seq.dir/flags.make
CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.o: tmp/opensbli_ops.cpp
CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.o: CMakeFiles/OpenSBLI_seq.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.o"
	/local/software/gcc/6.4.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.o -MF CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.o.d -o CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.o -c /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/tmp/opensbli_ops.cpp

CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.i"
	/local/software/gcc/6.4.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/tmp/opensbli_ops.cpp > CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.i

CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.s"
	/local/software/gcc/6.4.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/tmp/opensbli_ops.cpp -o CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.s

CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.o: CMakeFiles/OpenSBLI_seq.dir/flags.make
CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.o: tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp
CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.o: CMakeFiles/OpenSBLI_seq.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.o"
	/local/software/gcc/6.4.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.o -MF CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.o.d -o CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.o -c /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp

CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.i"
	/local/software/gcc/6.4.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp > CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.i

CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.s"
	/local/software/gcc/6.4.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp -o CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.s

# Object files for target OpenSBLI_seq
OpenSBLI_seq_OBJECTS = \
"CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.o" \
"CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.o"

# External object files for target OpenSBLI_seq
OpenSBLI_seq_EXTERNAL_OBJECTS =

OpenSBLI_seq: CMakeFiles/OpenSBLI_seq.dir/tmp/opensbli_ops.cpp.o
OpenSBLI_seq: CMakeFiles/OpenSBLI_seq.dir/tmp/MPI_OpenMP/opensbli_cpu_kernels.cpp.o
OpenSBLI_seq: CMakeFiles/OpenSBLI_seq.dir/build.make
OpenSBLI_seq: /local/software/hdf5/1.10.2/gcc/parallel/lib/libhdf5.so
OpenSBLI_seq: /local/software/hdf5/1.10.2/gcc/parallel/lib/libhdf5_hl.so
OpenSBLI_seq: /mainfs/local/software/mpich/3.2.1/gcc/lib/libmpicxx.so
OpenSBLI_seq: /mainfs/local/software/mpich/3.2.1/gcc/lib/libmpi.so
OpenSBLI_seq: CMakeFiles/OpenSBLI_seq.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable OpenSBLI_seq"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenSBLI_seq.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenSBLI_seq.dir/build: OpenSBLI_seq
.PHONY : CMakeFiles/OpenSBLI_seq.dir/build

CMakeFiles/OpenSBLI_seq.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenSBLI_seq.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenSBLI_seq.dir/clean

CMakeFiles/OpenSBLI_seq.dir/depend:
	cd /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build /home/mcww1g22/openSBLI/opensbli-cpc_release/apps/katzer_SBLI_test/build/CMakeFiles/OpenSBLI_seq.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenSBLI_seq.dir/depend

