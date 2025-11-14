#include "Operation.h"
#include <stdexcept>

double Operation::add(double a, double b) {
    return a + b;
}

double Operation::sub(double a, double b) {
    return a - b;
}

double Operation::mul(double a, double b) {
    return a * b;
}

double Operation::div(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}