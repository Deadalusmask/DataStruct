cmake_minimum_required(VERSION 2.8.4)
project(Tree)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp tree.cpp tree.h)
add_executable(Tree ${SOURCE_FILES})