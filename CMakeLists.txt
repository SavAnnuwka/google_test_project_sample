cmake_minimum_required(VERSION 3.13)
project(google_test_project_sample)
set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
include_directories(lib/gtest-1.8.1)

add_executable(google_test_project_sample
        test_failed.cpp
        test_passed.cpp
        test_fixture.cpp)


target_link_libraries(google_test_project_sample gtest gtest_main)


