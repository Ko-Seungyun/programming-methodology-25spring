#include "calculator.h"
#include <stdexcept>

const int MAX_INT = 2147483647;
const int MIN_INT = -2147483648;

int Calculator::add(int a, int b) {
    // TODO
    if ((b > 0) && (a > MAX_INT - b))
        throw std::overflow_error("Overflow");
    if ((b < 0) && (a < MIN_INT - b))
        throw std::overflow_error("Underflow");
    
    return a + b;
}

int Calculator::sub(int a, int b) {
    // TODO
    if ((b < 0) && (a > MAX_INT + b))
        throw std::overflow_error("Overflow");
    if ((b > 0) && (a < MIN_INT + b))
        throw std::overflow_error("Underflow");
    
    return a - b;
}

int Calculator::mul(int a, int b) {
    // TODO
    if (a == 0 || b == 0)
        return a * b;
    
    int result = a * b;
    if (result / b != a)
        throw std::overflow_error("Overflow");
    else
        return a * b;

    return -1;
}

int Calculator::div(int a, int b) {
    // TODO

    if (b == 0)
        throw std::invalid_argument("Division by zero");

    if (a == MIN_INT && b == -1)
        throw std::overflow_error("Overflow");

    return a / b;
}