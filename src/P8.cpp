//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <vector>
#include "P8.h"
using namespace std;

void P8(){
    cout << "START!\n";
    cout << boolalpha << are_same<int,char>() << endl;
    cout << boolalpha << are_same<vector<int>, vector<int> , vector<int>>() << endl; // true
}