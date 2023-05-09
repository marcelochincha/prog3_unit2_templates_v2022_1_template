//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P10_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P10_H

#include <vector>
#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

template<typename T>
class searcher{
    T contents;
    public:
        searcher() {}
        searcher(T& container){
            //Ordenar usando el algoritmo sort
            sort(begin(container),end(container));
            contents = container;
        }

        searcher& operator=(T& container){
            sort(begin(container),end(container));
            contents = container;
            return *this;
        }
        ~searcher() {}

        //Implementar constructor copia

        template<typename U>
        U operator<<(U value){
            return binarySearch(0,distance(begin(contents),end(contents))-1,value);
        }


        template<typename U>
        //Alogitmo de busqueda binaria
        U binarySearch(size_t start , size_t end, U value){ 
            if (end >= start){
                size_t mid = start + (end - start)/2;
                if (contents[mid] == value){
                    return mid;
                }
                if (contents[mid] > value){
                    return binarySearch(start,mid-1,value);
                }
                return binarySearch(mid+1,end,value);
            }
            return -1;
        }    
};

void P10();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P10_H
