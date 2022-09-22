cmake_minimum_required(VERSION 3.23)
project(cs2337-inclass-1)

set(CMAKE_CXX_STANDARD 11)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -Wuninitialized -pedantic-errors -Wconversion")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(untitled2 main.cpp Document.h Document.cpp Email.h Email.cpp File.h File.cpp)