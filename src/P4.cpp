//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "P4.h"
using namespace std;

    class point {
        int x;
        int y;
        public:
        point(int x, int y): x{x}, y{y} {}
        point() = default;

        friend ostream& operator<<(ostream& os, const point& p) {
            os << "{" << p.x <<", " << p.y << "}" << endl;
            return os;
        }

        int get_x() { return x; }
        int get_y() { return y; }
    };

void P4(){


    smart_ptr<point> sp1; // puntero inteligente no inicializado
    sp1 = make_smart_ptr<point>(20, 30);

    cout << *sp1 << endl;   // Imprimiendo el contenido

    smart_ptr<point> sp2 = make_smart_ptr<point>(10, 40); // puntero inteligente no inicializado
    cout << sp2->get_x() << endl;
    cout << sp2->get_y() << endl;
}