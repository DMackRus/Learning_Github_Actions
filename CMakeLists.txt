cmake_minimum_required(VERSION 3.0)

# Enables using ctest to run my testing files
enable_testing()

project(MyProject)

# Add executable
add_executable(${PROJECT_NAME} main.cpp basic_functions.cpp basic_functions.h)

add_executable(test_adding test_additions.cpp basic_functions.cpp basic_functions.h)
add_executable(test_multiplying test_multiplication.cpp basic_functions.cpp basic_functions.h)

# Add a test executable to be run by ctest
add_test(additions test_adding)
add_test(multiplications test_multiplying)
