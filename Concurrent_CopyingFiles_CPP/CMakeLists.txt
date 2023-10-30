cmake_minimum_required(VERSION 3.24)
project(try)

set(CMAKE_CXX_STANDARD 17)

add_executable(try main.cpp HandleTextFiles.h HandleTextFiles.cpp OutputTextFiles.h OutputTextFiles.cpp)
