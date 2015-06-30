cmake_minimum_required(VERSION 3.2)
project(src)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -std=c++11")

set(SOURCE_FILES
    main.cpp)

add_executable(manp ${SOURCE_FILES})