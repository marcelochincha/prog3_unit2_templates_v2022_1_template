//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P5.h"
using namespace std;

static void question_5_1() {
    std::cout << suma_producto(1, 10, 3, 5) << endl; // El resultado seria: 25
}

static void question_5_2() {
    std::cout << suma_producto(1) << endl; // El resultado seria: 1
}

static void question_5_3() {
    std::cout << suma_producto(2, 10.5, 14.0, 1, 11.0) << endl; // El resultado seria: 46
}

static void question_5_4() {
    std::cout << suma_producto(-2, 0, 1, 0, 0) << endl; // El resultado seria: 0
}

TEST_CASE("Question #5_1") {
    execute_test("test_5_1.in", question_5_1);
}

TEST_CASE("Question #5_2") {
    execute_test("test_5_2.in", question_5_2);
}

TEST_CASE("Question #5_3") {
    execute_test("test_5_3.in", question_5_3);
}

TEST_CASE("Question #5_4") {
    execute_test("test_5_4.in", question_5_4);
}