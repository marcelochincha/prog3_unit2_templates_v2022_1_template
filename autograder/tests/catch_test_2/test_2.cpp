//
// Created by rudri on 9/12/2020.
//
#include <list>
#include <vector>
#include <fstream>
#include <iostream>
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
using namespace std;

static void question_2_1(){
    vector<int> vec = {10, 20, 40, 11, 22, 54};
    print(begin(vec), end(vec), cout, "-");
}

static void question_2_2(){
    vector<int> vec = {10, 20, 40, 11, 22, 54};
    ofstream in ("result.txt");
    print(begin(vec), end(vec), in, "|");
    in.close();
    ifstream out ("result.txt");
    string result;
    getline(out, result);
    cout << result;
}

static void question_2_3(){
    vector<int> vec = {11, 22, 33, 44, 55, 66};
    auto last_it = next(begin(vec), static_cast<int>(vec.size() / 2));
    print(begin(vec), last_it, std::cout, "-");
}

static void question_2_4(){
    list<int> lst = {};
    ofstream in ("result.txt");
    print(begin(lst), end(lst), in, "|");
    in.close();
    ifstream out ("result.txt");
    string result;
    getline(out, result);
    cout << result;
}

TEST_CASE("Question #2_1") {
    execute_test("test_2_1.in", question_2_1);
}

TEST_CASE("Question #2_2") {
    execute_test("test_2_2.in", question_2_2);
}

TEST_CASE("Question #2_3") {
    execute_test("test_2_3.in", question_2_3);
}

TEST_CASE("Question #2_4") {
    execute_test("test_2_4.in", question_2_4);
}