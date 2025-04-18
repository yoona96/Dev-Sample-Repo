#include <iostream>
#include "Calculator.hpp"

int main() {
    Calculator calc;
    std::cout << "3 + 4 = " << calc.add(3, 4) << std::endl;
    std::cout << "Storing 7 to memory..." << std::endl;
    calc.store(7);
    std::cout << "Memory recall: " << calc.recall() << std::endl;
    return 0;
}
