cmake_minimum_required(VERSION 3.0)

project(MyProject)

# Add executable
add_executable(${PROJECT_NAME} main.cpp basic_functions.cpp basic_functions.h)

add_executable(Testing testing.cpp basic_functions.cpp basic_functions.h)
