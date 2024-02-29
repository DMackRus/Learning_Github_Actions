//
// Created by davem on 27/02/2024.
//

#include <iostream>
#include "basic_functions.h"

int main(){

    if(multiply(5,10) != 50) {
        std::cout << "multiply 1 is incorrect" << std::endl;
        return EXIT_FAILURE;
    }

    if(multiply(0,10) != 0) {
        std::cout << "Multiplication: 2 is incorrect" << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}