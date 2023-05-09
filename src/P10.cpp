//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <vector>
#include <array>
#include "P10.h"
using namespace std;

void P10(){
    cout << "start 10" << endl;
    array<float, 8> arr = {-1, 1, 2, 3, 5, 4, 7, 8};
    searcher<array<float, 8>> s = arr;
    for (const auto& i: arr)
        cout << i << " ";
    cout << endl;               // -1 1 2 3 4 5 7 8
    cout << (s << 2) << endl;   // 2

    cout << "end 10" << endl;
}