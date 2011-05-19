mkdir build
cd build
cmake -DOpenCV_DIR=/Library/opencv/android/build -DAndroidOpenCV_DIR=/Library/opencv/android/android-opencv/build -DARM_TARGETS="armeabi-v7a" -DCMAKE_TOOLCHAIN_FILE=/Library/opencv/android/android.toolchain.cmake ..

