//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P2_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P2_H

#include <iostream>
#include <vector>   
using namespace std;

template<typename Iter>
void print(Iter vI, Iter vF,ostream &os,string delimiter){
    for (auto i = vI; i != vF; i++) {
        if (i != vI)
            os << delimiter;
        os << *i;
    }
    os << endl;
}

void P2();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P2_H
