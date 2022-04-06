//
// Created by rudri on 9/12/2020.
//
#include <list>
#include <iostream>
#include <vector>
#include "catch.hpp"
#include "redirect_io.h"
#include "P6.h"
using namespace std;

static void question_6_1() {
    char var1 {};
    std::cout << index_of<int, char>(var1) << endl; // El resultado seria: 1
}

static void question_6_2() {
    string var2;
    std::cout << index_of<int, char, double, float, string>(var2) << endl; // El resultado seria: 4
}

static void question_6_3() {
    vector<int> var3;
    std::cout << index_of<int, char, vector<int>, list<double>>(var3) << endl; // El resultado seria: 2
}

static void question_6_4() {
    vector<double> var4;
    std::cout << index_of<int, char, vector<int>, list<double>>(var4) << endl; // El resultado seria: -1
}

TEST_CASE("Question #6_1") {
    execute_test("test_6_1.in", question_6_1);
}
TEST_CASE("Question #6_2") {
    execute_test("test_6_2.in", question_6_2);
}
TEST_CASE("Question #6_3") {
    execute_test("test_6_3.in", question_6_3);
}
TEST_CASE("Question #6_4") {
    execute_test("test_6_4.in", question_6_4);
}