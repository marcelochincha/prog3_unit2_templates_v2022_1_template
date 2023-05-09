//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P8_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P8_H

#include <type_traits>
#include <iostream>
using namespace std;

//template <typename T,typename R>


template <typename T, typename R, typename... Args> 
bool check() {
  return is_same<T, R>::value;
}

template <typename T,typename... Args>
bool are_same() {
    if constexpr (sizeof...(Args) == 0)
        return true;
    else
      return check<T,Args...>() && are_same<Args...>();
}

void P8();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P8_H
