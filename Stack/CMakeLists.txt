cmake_minimum_required(VERSION 2.8.4)
project(Stack)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp stack.cpp stack.h)
add_executable(Stack ${SOURCE_FILES})
