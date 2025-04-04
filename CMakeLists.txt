# Set the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(CS2Calculator)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the source files
set(SOURCES
    calculator.cpp
    test.cpp
)

# Create an executable
add_executable(calculator ${SOURCES})
