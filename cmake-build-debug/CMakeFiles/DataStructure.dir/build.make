# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/bot/Application/CLion-2019.1.4/clion-2019.1.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/bot/Application/CLion-2019.1.4/clion-2019.1.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bot/code/DataStructure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bot/code/DataStructure/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DataStructure.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DataStructure.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataStructure.dir/flags.make

CMakeFiles/DataStructure.dir/src/main.cpp.o: CMakeFiles/DataStructure.dir/flags.make
CMakeFiles/DataStructure.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bot/code/DataStructure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DataStructure.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DataStructure.dir/src/main.cpp.o -c /home/bot/code/DataStructure/src/main.cpp

CMakeFiles/DataStructure.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataStructure.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bot/code/DataStructure/src/main.cpp > CMakeFiles/DataStructure.dir/src/main.cpp.i

CMakeFiles/DataStructure.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataStructure.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bot/code/DataStructure/src/main.cpp -o CMakeFiles/DataStructure.dir/src/main.cpp.s

# Object files for target DataStructure
DataStructure_OBJECTS = \
"CMakeFiles/DataStructure.dir/src/main.cpp.o"

# External object files for target DataStructure
DataStructure_EXTERNAL_OBJECTS =

../bin/DataStructure: CMakeFiles/DataStructure.dir/src/main.cpp.o
../bin/DataStructure: CMakeFiles/DataStructure.dir/build.make
../bin/DataStructure: /usr/local/lib/libopencv_cudabgsegm.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudaobjdetect.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudastereo.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_stitching.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_superres.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_videostab.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_aruco.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_bgsegm.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_bioinspired.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_ccalib.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_datasets.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_dpm.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_face.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_freetype.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_fuzzy.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_hdf.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_line_descriptor.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_optflow.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_plot.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_reg.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_saliency.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_sfm.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_stereo.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_structured_light.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_surface_matching.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_text.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_xfeatures2d.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_ximgproc.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_xobjdetect.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_xphoto.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudafeatures2d.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudacodec.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudaoptflow.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudalegacy.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudawarping.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_shape.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_video.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_phase_unwrapping.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_rgbd.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_calib3d.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_features2d.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_flann.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_objdetect.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_ml.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_highgui.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_photo.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudaimgproc.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudafilters.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudaarithm.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_videoio.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_imgcodecs.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_imgproc.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_core.so.3.2.0
../bin/DataStructure: /usr/local/lib/libopencv_cudev.so.3.2.0
../bin/DataStructure: CMakeFiles/DataStructure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bot/code/DataStructure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/DataStructure"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataStructure.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataStructure.dir/build: ../bin/DataStructure

.PHONY : CMakeFiles/DataStructure.dir/build

CMakeFiles/DataStructure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataStructure.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataStructure.dir/clean

CMakeFiles/DataStructure.dir/depend:
	cd /home/bot/code/DataStructure/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bot/code/DataStructure /home/bot/code/DataStructure /home/bot/code/DataStructure/cmake-build-debug /home/bot/code/DataStructure/cmake-build-debug /home/bot/code/DataStructure/cmake-build-debug/CMakeFiles/DataStructure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DataStructure.dir/depend

