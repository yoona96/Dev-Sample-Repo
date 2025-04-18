cmake_minimum_required(VERSION 3.14)
project(CalculatorPlus)

set(CMAKE_CXX_STANDARD 17)

# include 폴더 경로 지정
include_directories(include)

# calculator 라이브러리 생성
add_library(calculator src/Calculator.cpp)

# 메인 실행 파일
add_executable(calculator_main src/main.cpp)
target_link_libraries(calculator_main calculator)

# 테스트 설정
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_calculator test/test_calculator.cpp)
target_link_libraries(test_calculator calculator GTest::GTest GTest::Main)

add_test(NAME CalculatorTests COMMAND test_calculator)
