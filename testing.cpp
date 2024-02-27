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

    return EXIT_SUCCESS;
}
