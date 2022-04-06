//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include "catch.hpp"
#include "redirect_io.h"
#include "P9.h"
using namespace std;

static void question_9_1() {
    int arreglo[10]{};
    init_array(arreglo);    // Valor inicial 0
    for (const auto& i: arreglo)
        std::cout << i << " ";
    std::cout << std::endl;
}
static void question_9_2() {
    int arreglo[15]{};
    init_array(arreglo, 5); // Se puede configurar el valor inicial (5)
    for (const auto& i: arreglo)
        std::cout << i << " ";
    std::cout << std::endl;
}
static void question_9_3() {
    int arreglo[14]{};
    init_array(arreglo, 1, 3);  // Se puede configurar el valor inicial (1) y
                                // el paso (3)
    for (const auto& i: arreglo)
        std::cout << i << " ";

}
static void question_9_4() {
    int arreglo[] {0, 0, 0, 4, 5, 6};
    init_array(arreglo, 2, 8, 2);   // Se puede configurar el valor inicial (2)
                                    // valor siguiente al final (8) y
                                    // el paso (2)
    for (const auto& i: arreglo)
        std::cout << i << " ";
    std::cout << std::endl;
}

TEST_CASE("Question #9_1") {
    execute_test("test_9_1.in", question_9_1);
}

TEST_CASE("Question #9_2") {
    execute_test("test_9_2.in", question_9_2);
}

TEST_CASE("Question #9_3") {
    execute_test("test_9_3.in", question_9_3);
}

TEST_CASE("Question #9_4") {
    execute_test("test_9_4.in", question_9_4);
}
