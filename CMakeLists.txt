cmake_minimum_required(VERSION 3.26)
project(ASCII_BLAST_3D)

set(CMAKE_CXX_STANDARD 23)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(ASCII_BLAST_3D main.cpp)

target_link_libraries(ASCII_BLAST_3D ${CURSES_LIBRARIES})