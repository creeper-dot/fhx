#include "Utils.h"
#include <iostream>

void Utils::welcomeMessage() {
    std::cout << "Welcome to the Simple Calculator!" << std::endl;
    std::cout << "You can perform operations like: a + b, a - b, a * b, a / b" << std::endl;
}

std::string Utils::getUserInput() {
    std::string input;
    std::getline(std::cin, input);
    return input;
}