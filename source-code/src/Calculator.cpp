#include "Calculator.hpp"
#include <stdexcept>

Calculator::Calculator() : memory(0) {}

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

int Calculator::divide(int a, int b) {
    if (b == 0) throw std::invalid_argument("Division by zero");
    return a / b;
}

void Calculator::store(int value) {
    memory = value;
}

int Calculator::recall() const {
    return memory;
}
