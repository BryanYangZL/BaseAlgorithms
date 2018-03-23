cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "-std=c++11")

add_executable(sort_test sort_test.cpp)
target_link_libraries(sort_test gtest gtest_main)
