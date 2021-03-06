# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /opt/local/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Library/opencv/android/apps/CVCamera

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Library/opencv/android/apps/CVCamera/build

# Include any dependencies generated for this target.
include jni/CMakeFiles/cvcamera.dir/depend.make

# Include the progress variables for this target.
include jni/CMakeFiles/cvcamera.dir/progress.make

# Include the compile flags for this target's objects.
include jni/CMakeFiles/cvcamera.dir/flags.make

jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o: jni/CMakeFiles/cvcamera.dir/flags.make
jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o: jni/cvcameraJAVA_wrap.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /Library/opencv/android/apps/CVCamera/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o"
	cd /Library/opencv/android/apps/CVCamera/build/jni && /Library/android-ndk-r5b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/darwin-x86/bin/arm-linux-androideabi-g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o -c /Library/opencv/android/apps/CVCamera/build/jni/cvcameraJAVA_wrap.cxx

jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.i"
	cd /Library/opencv/android/apps/CVCamera/build/jni && /Library/android-ndk-r5b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/darwin-x86/bin/arm-linux-androideabi-g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Library/opencv/android/apps/CVCamera/build/jni/cvcameraJAVA_wrap.cxx > CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.i

jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.s"
	cd /Library/opencv/android/apps/CVCamera/build/jni && /Library/android-ndk-r5b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/darwin-x86/bin/arm-linux-androideabi-g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Library/opencv/android/apps/CVCamera/build/jni/cvcameraJAVA_wrap.cxx -o CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.s

jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o.requires:
.PHONY : jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o.requires

jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o.provides: jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o.requires
	$(MAKE) -f jni/CMakeFiles/cvcamera.dir/build.make jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o.provides.build
.PHONY : jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o.provides

jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o.provides.build: jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o

jni/CMakeFiles/cvcamera.dir/Processor.cpp.o: jni/CMakeFiles/cvcamera.dir/flags.make
jni/CMakeFiles/cvcamera.dir/Processor.cpp.o: ../jni/Processor.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Library/opencv/android/apps/CVCamera/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object jni/CMakeFiles/cvcamera.dir/Processor.cpp.o"
	cd /Library/opencv/android/apps/CVCamera/build/jni && /Library/android-ndk-r5b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/darwin-x86/bin/arm-linux-androideabi-g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cvcamera.dir/Processor.cpp.o -c /Library/opencv/android/apps/CVCamera/jni/Processor.cpp

jni/CMakeFiles/cvcamera.dir/Processor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cvcamera.dir/Processor.cpp.i"
	cd /Library/opencv/android/apps/CVCamera/build/jni && /Library/android-ndk-r5b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/darwin-x86/bin/arm-linux-androideabi-g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Library/opencv/android/apps/CVCamera/jni/Processor.cpp > CMakeFiles/cvcamera.dir/Processor.cpp.i

jni/CMakeFiles/cvcamera.dir/Processor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cvcamera.dir/Processor.cpp.s"
	cd /Library/opencv/android/apps/CVCamera/build/jni && /Library/android-ndk-r5b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/darwin-x86/bin/arm-linux-androideabi-g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Library/opencv/android/apps/CVCamera/jni/Processor.cpp -o CMakeFiles/cvcamera.dir/Processor.cpp.s

jni/CMakeFiles/cvcamera.dir/Processor.cpp.o.requires:
.PHONY : jni/CMakeFiles/cvcamera.dir/Processor.cpp.o.requires

jni/CMakeFiles/cvcamera.dir/Processor.cpp.o.provides: jni/CMakeFiles/cvcamera.dir/Processor.cpp.o.requires
	$(MAKE) -f jni/CMakeFiles/cvcamera.dir/build.make jni/CMakeFiles/cvcamera.dir/Processor.cpp.o.provides.build
.PHONY : jni/CMakeFiles/cvcamera.dir/Processor.cpp.o.provides

jni/CMakeFiles/cvcamera.dir/Processor.cpp.o.provides.build: jni/CMakeFiles/cvcamera.dir/Processor.cpp.o

jni/cvcameraJAVA_wrap.cxx: ../jni/cvcamera.i
	$(CMAKE_COMMAND) -E cmake_progress_report /Library/opencv/android/apps/CVCamera/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Swig source"
	cd /Library/opencv/android/apps/CVCamera/build/jni && /usr/bin/swig -java -package 'com.theveganrobot.cvcamera.jni' -I/Library/opencv/android/android-opencv/jni -outdir /Library/opencv/android/apps/CVCamera/src/com/theveganrobot/cvcamera/jni -c++ -I/Library/android-ndk-r5b/sources/cxx-stl/gnu-libstdc++/include -I/Library/android-ndk-r5b/sources/cxx-stl/gnu-libstdc++/libs/armeabi-v7a/include -I/Library/opencv/android/build -I/Library/opencv/include -I/Library/opencv/include/opencv -I/Library/opencv/modules/contrib/include -I/Library/opencv/modules/calib3d/include -I/Library/opencv/modules/objdetect/include -I/Library/opencv/modules/features2d/include -I/Library/opencv/modules/imgproc/include -I/Library/opencv/modules/video/include -I/Library/opencv/modules/highgui/include -I/Library/opencv/modules/ml/include -I/Library/opencv/modules/legacy/include -I/Library/opencv/modules/flann/include -I/Library/opencv/modules/core/include -I/Library/opencv/android/android-opencv/jni/include -I/Library/opencv/android/apps/CVCamera/jni -o /Library/opencv/android/apps/CVCamera/build/jni/cvcameraJAVA_wrap.cxx /Library/opencv/android/apps/CVCamera/jni/cvcamera.i

# Object files for target cvcamera
cvcamera_OBJECTS = \
"CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o" \
"CMakeFiles/cvcamera.dir/Processor.cpp.o"

# External object files for target cvcamera
cvcamera_EXTERNAL_OBJECTS =

../libs/armeabi-v7a/libcvcamera.so: jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o
../libs/armeabi-v7a/libcvcamera.so: jni/CMakeFiles/cvcamera.dir/Processor.cpp.o
../libs/armeabi-v7a/libcvcamera.so: jni/CMakeFiles/cvcamera.dir/build.make
../libs/armeabi-v7a/libcvcamera.so: jni/CMakeFiles/cvcamera.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared module ../../libs/armeabi-v7a/libcvcamera.so"
	cd /Library/opencv/android/apps/CVCamera/build/jni && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cvcamera.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jni/CMakeFiles/cvcamera.dir/build: ../libs/armeabi-v7a/libcvcamera.so
.PHONY : jni/CMakeFiles/cvcamera.dir/build

jni/CMakeFiles/cvcamera.dir/requires: jni/CMakeFiles/cvcamera.dir/cvcameraJAVA_wrap.cxx.o.requires
jni/CMakeFiles/cvcamera.dir/requires: jni/CMakeFiles/cvcamera.dir/Processor.cpp.o.requires
.PHONY : jni/CMakeFiles/cvcamera.dir/requires

jni/CMakeFiles/cvcamera.dir/clean:
	cd /Library/opencv/android/apps/CVCamera/build/jni && $(CMAKE_COMMAND) -P CMakeFiles/cvcamera.dir/cmake_clean.cmake
.PHONY : jni/CMakeFiles/cvcamera.dir/clean

jni/CMakeFiles/cvcamera.dir/depend: jni/cvcameraJAVA_wrap.cxx
	cd /Library/opencv/android/apps/CVCamera/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Library/opencv/android/apps/CVCamera /Library/opencv/android/apps/CVCamera/jni /Library/opencv/android/apps/CVCamera/build /Library/opencv/android/apps/CVCamera/build/jni /Library/opencv/android/apps/CVCamera/build/jni/CMakeFiles/cvcamera.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jni/CMakeFiles/cvcamera.dir/depend

