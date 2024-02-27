cmake_minimum_required(VERSION 3.0)

# Enables using ctest to run my testing files
enable_testing()

project(MyProject)

# Add executable
add_executable(${PROJECT_NAME} main.cpp basic_functions.cpp basic_functions.h)

add_executable(Testing testing.cpp basic_functions.cpp basic_functions.h)

# Add a test executable to be run by ctest
add_test(basic_functions Testing)