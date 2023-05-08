//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P9_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P9_H

#include <iostream>
#include <array>
using namespace std;


template <typename T,typename V = T>
    void init_array(T& arr, V inicio,V step){
        for (V i = 0; i < std::size(arr); i ++) {
            arr[i] = inicio + i * step;
        }
    }

template <typename T,typename V = T>
    void init_array(T& arr, V inicio,V final,V step){
        for (V i = 0; i < std::size(arr); i ++) {
            V value = inicio + i * step;

            if(value >= final)
                break;
            arr[i] = value;
        }
    }

void P9();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P9_H
