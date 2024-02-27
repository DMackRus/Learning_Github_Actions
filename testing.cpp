//
// Created by davem on 27/02/2024.
//

#include <iostream>
#include "basic_functions.h"

int main(){

    int num1 = 10;
    int num2 = 5;

    int sum = add(num1, num2);

    if(sum == 15) {
        std::cout << "Sum: " << sum << " is correct" << std::endl;
    }
    else {
        std::cout << "Sum: " << sum << " is incorrect" << std::endl;
        return EXIT_FAILURE;
    }

    int subtraction = subtract(num1, num2);
    if(subtraction == 5) {
        std::cout << "Subtraction: " << subtraction << " is correct" << std::endl;
    }
    else {
        std::cout << "Subtraction: " << subtraction << " is incorrect" << std::endl;
        return EXIT_FAILURE;
    }

    int multiplication = multiply(num1, num2);
    if(multiplication == 50) {
        std::cout << "Multiplication: " << multiplication << " is correct" << std::endl;
    }
    else {
        std::cout << "Multiplication: " << multiplication << " is incorrect" << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
