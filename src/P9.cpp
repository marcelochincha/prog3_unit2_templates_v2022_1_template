//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <array>
#include "P9.h"
using namespace std;



void P9(){
    cout << "P9" << endl;
/*
    float arreglo[14];
    init_array(arreglo, 1, 3);  // Se puede configurar el valor inicial (1) y 
                                // el paso (3)
    for (const auto& i: arreglo)
        std::cout << i << " ";
    std::cout << std::endl;
    // output: 1 4 7 10 13 16 19 22 25 28 31 34 37 40
*/
    int arreglo[6];
    init_array(arreglo,1,3);
    for (const auto& i: arreglo)
        std::cout << i << " ";
    // output: 2 4 6 4 5 6
}


