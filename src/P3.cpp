//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <list>
#include "P3.h"
using namespace std;

void P3() {
    // Contenedor 
    std::list<double> lst = {10,20,30};
    cout << "Total: " << sumarizar(begin(lst), end(lst), 0) << endl;
    // Calcular la mitad de valores inferior
    auto last_it = next(begin(lst), size(lst) / 2);
    cout << "Sumatoria de la mitad: " << sumarizar(begin(lst), last_it, 0) << endl;
}