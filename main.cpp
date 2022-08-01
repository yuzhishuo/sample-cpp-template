// std
#include <iostream>  // for std::cout

// custom
#include <algor/algor.h>  // for JumpGame2::Solution
#include <configure.h>  // for CMAKE_PROJECT_VERSION_MAJOR, CMAKE_PROJECT_VERSION_MINOR

// 3rd party
#include <spdlog/spdlog.h>  // for SPDLOG_ERROR, SPDLOG_INFO

int main(int argc, char** argv) {
  std::cout << "PROJECT_NAME is" << std::endl;
  std::cout << "PROJECT_VERSION_MAJOR is " << CMAKE_PROJECT_VERSION_MAJOR
            << std::endl;
  std::cout << "PROJECT_VERSION_MINOR is " << CMAKE_PROJECT_VERSION_MINOR
            << std::endl;

  SPDLOG_ERROR("Hello, world!");
  SPDLOG_INFO("Hello, world!");
}