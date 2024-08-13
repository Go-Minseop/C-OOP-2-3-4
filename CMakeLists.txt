cmake_minimum_required(VERSION 3.28)
project(OOP2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-DDEBUG")

set(DIR_INCLUDE
        ${CMAKE_SOURCE_DIR}/include)
set(DIR_SOURCE
        ${CMAKE_SOURCE_DIR}/src)

include_directories(
        ${DIR_INCLUDE})

add_executable(OOP2
        ${DIR_SOURCE}/main.cpp
        ${DIR_SOURCE}/account.cpp
        ${DIR_SOURCE}/general.cpp)
