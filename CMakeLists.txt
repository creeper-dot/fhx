cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)

set(CMAKE_CXX_STANDARD 11)
include_directories(include)

add_executable(Calculator src/main.cpp src/Calculator.cpp src/Utils.cpp src/Operation.cpp)