//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P7_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P7_H

#include <vector>
#include <list>
#include <array>
#include <map>
#include <iostream>

using namespace std;


//List and vector
template <typename T, template <typename...> class container>
ostream &show_dynamic(ostream &os, container<T> cont) {
  os << "{";
  for (auto it = cont.begin(); it != cont.end(); it++){
    os << *it;
    if(it != prev(cont.end()))
      os << ", ";
  }
  os << "}";
  return os;
}

template <typename T> 
ostream &operator<<(ostream &os, vector<T> vec) {
  return show_dynamic(os, vec);
}

template <typename T> 
ostream &operator<<(ostream &os, list<T> lst) {
  return show_dynamic(os, lst);
}

//Array
template <typename T,size_t len>
ostream &operator<<(ostream &os,array<T,len> arr){
  os << "{";
  for (auto it = begin(arr); it != end(arr); it++){
        os << *it;
        if (it != prev(end(arr)))
            os << ", ";
    }
  os << "}";
  return os;
}

//Map
template <typename T, typename U>
ostream &operator<<(ostream &os, map<T, U> map) {
  os << "{";
  for (auto it = map.begin(); it != map.end(); it++){
    os << it->first << ":" << it->second;
    if(it != prev(map.end()))
      os << ", ";
  }
  os << "}";
  return os;
}

void P7();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P7_H
