//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P6_H

#include <iostream>
#include <typeinfo>
#include <type_traits>
using namespace std;


template <typename T>
int get_index() {
    return -1;
}

template <typename T, typename U, typename ...Args>
int get_index() {
    if (std::is_same_v<T, U>) {
        return sizeof...(Args);
    } else {
        return get_index<T, Args...>();
    }
}


/*
template <typename U,typename T>
int index_of(U a, int in = 0){
    cout << "index_of 1" << endl;
    if(typeid(T) == typeid(a))
        return in;
    return -1;
}

template <typename U,typename ...Args,typename T>
int index_of(U a,int in = 0){
    if(typeid(T) == typeid(a))
        return in;
    else
        return index_of<Args...>(a,in+1);
}*/

void P6();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
