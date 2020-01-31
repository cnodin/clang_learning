cmake_minimum_required(VERSION 3.8)
project(c_in_a_nutshell)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES ch01/main.c ch02/limits.c)
add_executable(c_in_a_nutshell ${SOURCE_FILES})