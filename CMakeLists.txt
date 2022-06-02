cmake_minimum_required(VERSION 3.22)
project(CPP7)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CPP7
        header.h
        main.cpp
        release.cpp CWhole.h CWhole.cpp)
