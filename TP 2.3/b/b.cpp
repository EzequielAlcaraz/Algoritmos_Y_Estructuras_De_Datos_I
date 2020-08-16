#include <iostream>

using namespace std;

int main()
{
    double lab, teo, pract, l, t, p, NotaFinal;
    cout << "Ingresar notas evaluativas: " << endl;
    cout << "Laboratorio: "; cin >> lab;
    cout << "Teorico: "; cin >> teo;
    cout << "Practico: "; cin >> pract;

    l = (30 * lab) / 100;
    t = (60 * teo) / 100;
    p = (10 * pract) / 100;
    NotaFinal = l + t + p;

    cout << "La nota final es: " << NotaFinal << endl;

    return 0;
}
