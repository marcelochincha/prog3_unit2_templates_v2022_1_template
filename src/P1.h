//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P1_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P1_H

#include <iostream>
#include <string>
using namespace std;

template<typename T = string>
T input(std::string label = ""){
    T buffer;
    cout << label;
    cin >> buffer;
    return buffer;
}

void P1();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P1_H
