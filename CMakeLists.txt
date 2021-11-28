cmake_minimum_required(VERSION 3.20)
project(GoldRabbits)

set(CMAKE_CXX_STANDARD 14)

add_executable(GoldRabbits main.cpp BigInt.h BigInt.cpp GoldRabbits.tools)
