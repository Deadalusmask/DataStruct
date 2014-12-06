cmake_minimum_required(VERSION 2.8.4)
project(List)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    LinkList.cpp
    LinkList.h
    main.cpp
    SeqList.cpp
    SeqList.h)

add_executable(List ${SOURCE_FILES})