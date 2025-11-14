#include "Calculator.h"
#include "Utils.h"
#include <iostream>

int main() {
    Utils::welcomeMessage();
    std::string input = Utils::getUserInput();

    try {
        double result = Calculator::calculate(input);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}