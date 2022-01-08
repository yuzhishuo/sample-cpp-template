DEPS_PAHT=$(pwd)

# gtest and gmock
PROJECT_DIR="googletest"

cd $PROJECT_DIR
mkdir build && cd build
cmake ..
make

cp -r lib/lib* ${DEPS_LIB_PATH} # DEPS_LIB_PATH is defined in root CMakeLists.txt
cp -r include/gtest ${DEPS_INCLUDE_PATH} # DEPS_INCLUDE_PATH is defined in root CMakeLists.txt
cp -r include/gmock ${DEPS_INCLUDE_PATH} # DEPS_INCLUDE_PATH is defined in root CMakeLists.txt


