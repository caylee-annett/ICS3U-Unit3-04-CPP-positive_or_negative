// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program tells the user if an integer is positive or negative

#include <iostream>

int main() {
    // This function tells the user if their number is positive or negative
    int integer;

    // Input
    std::cout << "This program checks if a number is positive or negative."
        << std::endl;
    std::cout << "" << std::endl;
     std::cout << "Enter an integer: ";
    std::cin >> integer;

    // Process & Output
    if (integer >= 1) {
            std::cout << integer << " is a positive number." << std::endl;
    } else if (integer <= -1) {
        std::cout << integer << " is a negative number." << std::endl;
    } else {
        std::cout << "0 is just a zero!" << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
