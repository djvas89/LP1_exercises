cmake_minimum_required(VERSION 3.8)
project(LP1)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c pr01_ex2017.c pr01_ex2017.h pr02_ex2017.c pr02_ex2017.h pr03_ex2017.c pr03_ex2017.h pr04_ex2017.c pr04_ex2017.h pr05_ex2017.c pr05_ex2017.h pr06_ex2017.c pr06_ex2017.h)
add_executable(LP1 ${SOURCE_FILES})