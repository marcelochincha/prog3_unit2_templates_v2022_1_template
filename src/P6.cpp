//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "P6.h"
using namespace std;

void P6(){
    cout << "Start" << endl;
    
    cout << "Test 1" << endl;
    char var1{};
    std::cout << index_of<int,char>(var1) << endl; // El resultado seria: 1  
    cout << "Test 2" << endl;
    string var2;
    std::cout << index_of<int, char, double, float, string>(var2) << endl; // El resultado seria: 4
    cout << "END!" << endl;
}