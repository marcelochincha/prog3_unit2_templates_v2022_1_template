//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P6_H

#include <iostream>
#include <typeinfo>
#include <type_traits>
using namespace std;

template <typename R, typename ...Args, typename T>
int index_of(T arg,int index = 0){
    if constexpr(is_same<T,R>())
        return index;
    else if constexpr (sizeof...(Args) > 0)
        return index_of<Args...>(arg,index+1); 
    else 
        return -1;    
}

void P6();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
