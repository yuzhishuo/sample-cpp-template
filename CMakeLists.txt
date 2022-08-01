cmake_minimum_required(VERSION 3.16.0)

project(samplate-cpp-template)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)

set(CMAKE_CXX_STANDARD 20)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

include(CTest) # note: this adds a BUILD_TESTING which defaults to ON

option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

configure_file(
    "${PROJECT_SOURCE_DIR}/config/configure.h.in"
    "${PROJECT_SOURCE_DIR}/include/configure.h"
)

add_subdirectory(${PROJECT_SOURCE_DIR}/include)

set(INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
include_directories(${INCLUDE_DIR})
# aux_source_directory(${PROJECT_SOURCE_DIR}/src DIR_SRCS)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} algor spdlog::spdlog)

# project deps
add_subdirectory(deps)

# test
if(BUILD_TESTING)
    add_subdirectory(test)
endif()

# install
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
install (TARGETS ${PROJECT_NAME} DESTINATION bin)