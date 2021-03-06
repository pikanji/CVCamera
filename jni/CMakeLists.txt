#########################################################
# Find opencv and android-opencv
#########################################################

#set(OpenCV_DIR ${CMAKE_SOURCE_DIR}/../../build 
set(OpenCV_DIR /Library/opencv/android/build)
#    CACHE PATH "The path where you built opencv for android")
#set(AndroidOpenCV_DIR ${CMAKE_SOURCE_DIR}/../../android-opencv/build 
set(AndroidOpenCV_DIR /Library/opencv/android/android-opencv/build)
#    CACHE PATH "The path where you built android-opencv")

find_package(OpenCV REQUIRED)
FIND_PACKAGE(AndroidOpenCV REQUIRED )

#########################################################
#c flags, included, and lib dependencies
#########################################################

#notice the "recycling" of CMAKE_C_FLAGS
#this is necessary to pick up android flags
set( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -pedantic -fPIC" )

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

set( LIBRARY_DEPS ${AndroidOpenCV_LIBS} ${OpenCV_LIBS} )
if(ANDROID)
  set( LIBRARY_DEPS ${LIBRARY_DEPS} log dl)
endif(ANDROID)

#########################################################
#SWIG STUFF
#########################################################
#the java package to place swig generated java files in
set(MY_PACKAGE com.theveganrobot.cvcamera.jni)

if(NOT ANDROID)
  #non android swig and jni
  #jni is available by default on android
  find_package(JNI REQUIRED)
  include_directories(${JNI_INCLUDE_DIRS})
  FIND_PACKAGE(SWIG)
endif()

INCLUDE(${SWIG_USE_FILE}) #on android this is found by the cmake toolchain

if(ANDROID)
  #this will set the output path for the java package
  #and properly create the package declarations in generated java sources
  SET_SWIG_JAVA_PACKAGE( ${MY_PACKAGE} ) #defined in the android toolchain
endif(ANDROID)

#this add's the swig path for the opencv wrappers
SET(CMAKE_SWIG_FLAGS ${CMAKE_SWIG_FLAGS} "-I${AndroidOpenCV_SWIG_DIR}" )

SET_SOURCE_FILES_PROPERTIES(cvcamera.i PROPERTIES CPLUSPLUS ON)

#add the swig module, giving it the name, java, and then all of the source files
SWIG_ADD_MODULE(cvcamera java 
                cvcamera.i #swig file
                Processor.cpp #cpp files can be compiled to
                )
             
#link the module like any other   
target_link_libraries(cvcamera ${LIBRARY_DEPS} )
