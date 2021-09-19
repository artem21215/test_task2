cmake_minimum_required(VERSION 3.17)
project(test_task2)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_task2 main.cpp Dot.cpp Dot.h Circle.cpp Circle.h operations_with_circle.cpp operations_with_circle.h print_info.cpp print_info.h)