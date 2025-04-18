#include "Calculator.hpp"
#include <gtest/gtest.h>

TEST(CalculatorTest, Addition) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(CalculatorTest, DivisionByZero) {
    Calculator calc;
    EXPECT_THROW(calc.divide(10, 0), std::invalid_argument);
}

TEST(CalculatorTest, Memory) {
    Calculator calc;
    calc.store(42);
    EXPECT_EQ(calc.recall(), 42);
}
