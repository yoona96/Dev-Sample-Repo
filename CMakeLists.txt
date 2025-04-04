cmake_minimum_required(VERSION 3.10)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(main src/main.cpp src/hello.cpp)

enable_testing()
add_executable(test_runner test/test_hello.cpp src/main.cpp src/hello.cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
target_link_libraries(test_runner ${GTEST_LIBRARIES} GTest::gtest_main pthread)
add_test(NAME HelloTest COMMAND test_runner)
