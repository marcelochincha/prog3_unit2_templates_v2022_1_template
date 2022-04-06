//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P4.h"
using namespace std;

static void question_4_1(){
    // puntero inteligente no inicializado
    smart_ptr<int> sp1;
    sp1 = make_smart_ptr<int>(10);
    cout << *sp1 << endl;   // Imprimiendo el contenido

    // puntero inteligente inicializado
    smart_ptr<string> sp2 = make_smart_ptr<string>("Hola");
    cout << *sp2 << endl;   // Imprimiendo el contenido
}

static void question_4_2(){
    // puntero inteligente no inicializado
    smart_ptr<point> sp1;
    sp1 = make_smart_ptr<point>(20, 30);
    cout << *sp1 << endl;   // Imprimiendo el contenido

    // puntero inteligente inicializado
    smart_ptr<point> sp2 = make_smart_ptr<point>(10, 40);
    cout << sp2->get_x() << endl;
    cout << sp2->get_y() << endl;
}

TEST_CASE("Question #4_1") {
    execute_test("test_4_1.in", question_4_1);
}

TEST_CASE("Question #4_2") {
    execute_test("test_4_2.in", question_4_2);
}
