//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P10.h"
#include <vector>
#include <array>
using namespace std;

static void question_10_1() {
    array<int, 4> arr = { 40, 10, 25, 20 };
    searcher<array<int, 4>> s = arr;
    for (const auto& i: arr)
        cout << i << " ";
    cout << endl;                // 10 20 25 40
    auto index = (s << 10);
    cout << index << endl;      // 0
}

static void question_10_2() {
    vector<int> vec = {5, 1, 2, 3, 5, 7, 7};
    searcher<vector<int>> s = vec;
    for (const auto& i: vec)
        cout << i << " ";
    cout << endl;                // 1 2 3 5 5 7 7
    cout << (s << 10) << endl;  // -1
}

static void question_10_3() {
    vector<double> vec = {5, 1, 2, 3, 5, 4, 7, -1};
    searcher<vector<double>> s = vec;
    for (const auto& i: vec)
        cout << i << " ";
    cout << endl;               // -1 1 2 3 4 5 5 7
    cout << (s << 3) << endl;  // 3
}

static void question_10_4() {
    array<float, 8> arr = {-1, 1, 2, 3, 5, 4, 7, 8};
    searcher<array<float, 8>> s = arr;
    for (const auto& i: arr)
        cout << i << " ";
    cout << endl;               // -1 1 2 3 4 5 7 8
    cout << (s << 2) << endl;   // 2
}

TEST_CASE("Question #10_1") {
    execute_test("test_10_1.in", question_10_1);
}

TEST_CASE("Question #10_2") {
    execute_test("test_10_2.in", question_10_2);
}

TEST_CASE("Question #10_3") {
    execute_test("test_10_3.in", question_10_3);
}

TEST_CASE("Question #10_4") {
    execute_test("test_10_4.in", question_10_4);
}