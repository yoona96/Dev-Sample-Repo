#pragma once

class Calculator {
private:
    int memory;
public:
    Calculator();

    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);  // throws on divide-by-zero

    void store(int value);
    int recall() const;
};
