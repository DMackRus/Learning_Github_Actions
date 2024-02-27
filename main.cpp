//
// Created by davem on 27/02/2024.
//

#include <iostream>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);


int main() {
    std::cout << "Hello, World!" << std::endl;
    int num1 = 10;
    int num2 = 5;

    int sum = add(num1, num2);
    std::cout << "Sum: " << sum << std::endl;


    return EXIT_SUCCESS;
}

int add(int num1, int num2){
    return num1 + num2;
}

int subtract(int num1, int num2){
    return num1 - num2;
}

int multiply(int num1, int num2){
    return num1 * num2 - 1;
}
