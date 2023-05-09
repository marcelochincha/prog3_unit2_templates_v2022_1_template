//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <vector>
#include <list>
#include "P6.h"
using namespace std;

void P6(){
    cout << "Start" << endl;
    
    cout << "Test 1" << endl;
    char var1 {};
    std::cout << index_of<int, char>(var1) << endl; // El resultado seria: 1
    cout << "Test 2" << endl;
    string var2;
    std::cout << index_of<int, char, double, string>(var2) << endl; // El resultado seria: 4
    //cout << "END!" << endl;

    cout << "Test 3" << endl;
    vector<int> var3;
    std::cout << index_of<int, char, vector<int>, list<double>>(var3) << endl; // El resultado seria: 2

    cout << "Test 4" << endl;
    vector<double> var4;
    std::cout << index_of<int, char,float>(var4) << endl; // El resultado seria: -1
}