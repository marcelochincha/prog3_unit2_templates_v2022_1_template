//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P5_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P5_H


template <typename T>
T suma_producto(T a) {
    return a;
}

template <typename U,typename V, typename ...Args>
auto suma_producto(U a, V b,Args... args) {
    return ((a * b) + suma_producto(args...));
}

void P5();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P5_H
