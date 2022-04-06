//
// Created by rudri on 9/12/2020.
//
#include <vector>
#include <array>
#include <list>
#include <map>
#include "catch.hpp"
#include "redirect_io.h"
#include "P7.h"
using namespace std;

static void question_7_1() {
    std::array<int, 3> arr = {10, 20, 30};
    std::cout << "Los valores de arr son: " << arr << std::endl; // Los valores de lst son: {10, 20, 30}
}

static void question_7_2() {
    std::vector<int> vec = {10, 20, 30};
    std::cout << "Los valores de vec son: " << vec << std::endl; // Los valores de lst son: {10, 20, 30}
}

static void question_7_3() {
    std::list<int> lst = {10, 20, 30};
    std::cout << "Los valores de lst son: " << lst << std::endl; // Los valores de lst son: {10, 20, 30}
}

static void question_7_4() {
    std::map<char, int> mp = {{'a', 10}, {'b', 20}, {'c', 30}};
    std::cout << "Los valores de mp son: " << mp << std::endl; // Los valores de mp son: {{'a': 10}, {'b': 20}, {'c': 30}}
}

TEST_CASE("Question #7_1") {
    execute_test("test_7_1.in", question_7_1);
}

TEST_CASE("Question #7_2") {
    execute_test("test_7_2.in", question_7_2);
}

TEST_CASE("Question #7_3") {
    execute_test("test_7_3.in", question_7_3);
}

TEST_CASE("Question #7_4") {
    execute_test("test_7_4.in", question_7_4);
}