cmake_minimum_required(VERSION 3.8)
project(Modular)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        Begin Boolean Integer If Begin/Begin.h Boolean/Boolean.h Integer/Integer.h If/If.h If/08.cpp If/17.cpp If/26.cpp)
add_executable(Modular ${SOURCE_FILES})