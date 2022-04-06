//
// Created by rudri on 9/12/2020.
//
#include <list>
#include <iostream>
#include "catch.hpp"
#include "redirect_io.h"
#include "P3.h"
using namespace std;

static void question_3_1(){
    list<double> lst = {10.5, 20.4, 30.2, 40.5, 50.9, 60.5};
    cout << "Total: " << sumarizar(begin(lst), end(lst), 0) << endl;
}

static void question_3_2(){
    list<double> lst = {10.5, 20.4, 30.2, 40.5, 50.9, 60.5};
    // Calcular la mitad de valores inferior
    auto last_it = next(begin(lst), static_cast<int>(size(lst) / 2));
    cout << "Sumatoria de la mitad: " << sumarizar(begin(lst), last_it, 0) << endl;
}

static void question_3_3(){
    vector<double> vec = {10.5, 20.4, 30.2, 40.5, 50.9, 60.5};
    cout << "Total: " << sumarizar(begin(vec), end(vec), 0) << endl;
}

static void question_3_4(){
    vector<double> vec = {10.5, 20.4, 30.2, 40.5, 50.9, 60.5};
    // Calcular la mitad de valores inferior
    auto last_it = next(begin(vec), static_cast<int>(size(vec) / 2));
    cout << "Sumatoria de la mitad: " << sumarizar(begin(vec), last_it, 0) << endl;
}

TEST_CASE("Question #3_1") {
    execute_test("test_3_1.in", question_3_1);
}

TEST_CASE("Question #3_2") {
    execute_test("test_3_2.in", question_3_2);
}

TEST_CASE("Question #3_3") {
    execute_test("test_3_3.in", question_3_3);
}

TEST_CASE("Question #3_4") {
    execute_test("test_3_4.in", question_3_4);
}