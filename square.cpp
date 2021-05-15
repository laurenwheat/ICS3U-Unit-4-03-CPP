// Copyright (c) 2021 Lauren Wheatley All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: May 2021
// This program compares the value of two numbers

#include <iostream>
#include <string>
#include <cmath>

int main() {
    int positiveInteger;
    int loopCounter;
    int squareNum = 0;
    std::string userInputInt;

    std::cout << "Enter a number: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;

    try {
        userInputInt = std::stoi(userInput)
        if (userInputInt >= 0) {
            for (loopCounter = 0; loopCounter <= userInputInt; loopCounter) {
                squareNum = (loopCounter, 2);
                std::cout << loopCounter << "² = " << squareNum << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid input!!!!"
    }
    std::cout << "Thanks for playing!!!!!!" << std::endl;
}
