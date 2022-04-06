//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

using namespace std;

static void question_1_1(){
    auto text = input();
    cout << text << endl;
}

static void question_1_2(){
    auto text = input("Ingrese Texto");
    cout << text << endl;
}

static void question_1_3(){
    auto entero = input<int>();
    cout << entero << endl;
}

static void question_1_4(){
    auto real = input<double>();
    cout << real << endl;
}

TEST_CASE("Question #1_1") {
    execute_test("test_1_1.in", question_1_1);
}

TEST_CASE("Question #1_2") {
    execute_test("test_1_2.in", question_1_2);
}

TEST_CASE("Question #1_3") {
    execute_test("test_1_3.in", question_1_3);
}

TEST_CASE("Question #1_4") {
    execute_test("test_1_4.in", question_1_4);
}
