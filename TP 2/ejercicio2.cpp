#include <iostream>

using namespace std;

int main()
{
    cout << "El volumen de una habitacion de 5 m de largo, 4 m de ancho y 2.5 m de alto es de: " << 5 * 4 * 2.5 << endl;

    cout << "Volumen de un cono con un radio base de 14.5 y una altura de 26.79 es de: " << (3.14 * 14.5e2 * 26.79) / 3 << endl;

    double pi, rad,alt;
    int v;
    pi = 3.14;
    rad = 14.5;
    alt = 26.79;

    v = (pi * (rad * rad) * alt) / 3;
    cout << "El volumen de un cono es de: " << v << endl;

    return 0;
}
