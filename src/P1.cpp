//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "P1.h"
using namespace std;

void P1() {
    auto text = input();
    auto entero = input<int>("Ingrese un numero: ");
    auto real = input<double>("Ingrese un numero: ");
    std::cout << "El texto es: " << text << endl;
    std::cout << "El entero es: " << entero << endl;
    std::cout << "El real es: " << real << endl;
}