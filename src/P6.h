//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P6_H

#include <iostream>
#include <typeinfo>
#include <type_traits>
using namespace std;

template <typename P, typename ...Args, typename T>
int index_of(T arg,int index = 0){
    //cout << "Index: " << index << endl;
    if(is_same<P,T>::value){
        //cout << "P equals T" << endl;
        return index;
    }else if (sizeof...(Args) == 0){
        return -1;
    }
    return index_of<Args...,T>(arg,index + 1);
}

void P6();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
