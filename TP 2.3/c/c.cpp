#include <iostream>

using namespace std;

int main()
{
    float s, L, W, a, b, c, supc, supr, supt;

    cout << "Programa para calcular las superficies de un cuadrado, un reactangulo y un triangulo" << endl;
    cout << "Introduzca los valores requeridos" << endl << '\n';

    cout << "Longitud del lado de un cuadrado: "; cin >> s; cout << '\n';

    cout << "Lado mas largo del rectangulo: "; cin >> L;
    cout << "Lado mas corto del rectangulo: "; cin >> W; cout << '\n';

    cout << "Longitudes de los lados del triangulo" << endl;
    cout << "Lado 1: "; cin >> a;
    cout << "Lado 2: "; cin >> b;
    cout << "Lado 3: "; cin >> c; cout << '\n' << '\n';

    supc = 4 * s;
    supr = 2 * L + 2 * W;
    supt = a + b +c;

    cout << "La superficie del cuadrado es de: " << supc << endl;
    cout << "La superficie del rectangulo es de: " << supr << endl;
    cout << "La superficie del triangulo es de: " << supt << endl;

    return 0;
}
