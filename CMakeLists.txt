cmake_minimum_required(VERSION 3.26)
project(PA0_starter_files C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(PA0_starter_files
        pa0.c
        pa0.h
        pa0_test.c)
