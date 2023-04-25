//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P3_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P3_H

#include <iostream>

template <typename Iter>
auto sumarizar(Iter vI, Iter vF, double valorInicial){
    double suma = valorInicial;
    while (vI != vF) {
        suma += *vI;
        ++vI;
    }
    return suma;
}

void P3();
#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P3_H
