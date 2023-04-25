//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P6_H

#include <iostream>
using namespace std;

template <typename T, typename... TypeList>
int index_of_helper() {
    return -1;
}

template <typename T, typename U, typename... TypeList>
int index_of_helper() {
    if (std::is_same<T, U>()) {
        return 0;
    } else {
        int pos = index_of_helper<T, TypeList...>();
        return pos != -1 ? pos + 1 : -1;
    }
}

template <typename T, typename... TypeList>
int index_of(T) {
    return index_of_helper<T,TypeList...>();
}
void P6();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
