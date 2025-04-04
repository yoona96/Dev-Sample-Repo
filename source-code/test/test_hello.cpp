#include <gtest/gtest.h>
#include "../include/hello.h"

TEST(HelloTest, ReturnsCorrectMessage) {
    EXPECT_EQ(get_hello(), "Hello from CI/CD!");
}
