cmake_minimum_required(VERSION 3.13)
project(WordHuntSolver)

set(CMAKE_CXX_STANDARD 14)

add_executable(WordHuntSolver src/solve.cpp src/solve.h src/Node.h)
