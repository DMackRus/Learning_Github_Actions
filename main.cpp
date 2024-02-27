//
// Created by davem on 27/02/2024.
//

#include <iostream>
#include "basic_functions.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    int num1 = 10;
    int num2 = 5;

    int sum = add(num1, num2);
    std::cout << "Sum: " << sum << std::endl;

    int subtraction = subtract(num1, num2);
    std::cout << "Subtraction: " << subtraction << std::endl;

    return EXIT_SUCCESS;
}
