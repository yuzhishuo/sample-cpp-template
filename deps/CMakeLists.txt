cmake_minimum_required(VERSION 3.16.0)


include(FetchContent)

FetchContent_Declare(spdlog
        GIT_REPOSITORY https://gitee.com/xiutanshe/spdlog.git
        GIT_TAG v1.4.1)
FetchContent_MakeAvailable(spdlog)