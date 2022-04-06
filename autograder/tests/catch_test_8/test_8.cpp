//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include "catch.hpp"
#include "redirect_io.h"
#include "P8.h"
using namespace std;

static void question_8_1() {
    cout << boolalpha << are_same<int>() << endl; // true
}
static void question_8_2() {
    cout << boolalpha << are_same<int, int , char>() << endl; // false
}
static void question_8_3() {
    cout << boolalpha << are_same<vector<int>, vector<int> , vector<int>>() << endl; // true
}
static void question_8_4() {
    cout << boolalpha << are_same<int, const int, int&, int &&>() << endl; // false
}

TEST_CASE("Question #8_1") {
    execute_test("test_8_1.in", question_8_1);
}

TEST_CASE("Question #8_2") {
    execute_test("test_8_2.in", question_8_2);
}

TEST_CASE("Question #8_3") {
    execute_test("test_8_3.in", question_8_3);
}

TEST_CASE("Question #8_4") {
    execute_test("test_8_4.in", question_8_4);
}