#include "Calculator.h"
#include "Operation.h"
#include <sstream>
#include <stdexcept>

double Calculator::calculate(const std::string& expression) {
    std::istringstream iss(expression);
    double a, b;
    char op;
    iss >> a >> op >> b;

    switch (op) {
        case '+':
            return Operation::add(a, b);
        case '-':
            return Operation::sub(a, b);
        case '*':
            return Operation::mul(a, b);
        case '/':
            return Operation::div(a, b);
        default:
            throw std::invalid_argument("Invalid operator");
    }
}