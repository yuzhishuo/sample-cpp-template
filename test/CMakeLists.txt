project(unit_test)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://gitee.com/extra-mirrors/googletest.git
  GIT_TAG  release-1.11.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE) # for MSVC
FetchContent_MakeAvailable(googletest)

aux_source_directory(${unit_test_SOURCE_DIR} UNIT_TEST_SRCS )
include_directories(${INCLUDE_DIR})

add_executable(
    ${PROJECT_NAME} ${UNIT_TEST_SRCS} ${DIR_SRCS}
)
target_link_libraries(${PROJECT_NAME} algor gtest_main) 


include(GoogleTest) # for gtest_discover_tests, gtest_add_tests
# gtest_discover_tests(${PROJECT_NAME}) # equal to gtest_add_tests()
 
gtest_add_tests(TARGET       ${PROJECT_NAME}
                TEST_SUFFIX .noArgs
                TEST_LIST   noArgsTests
)