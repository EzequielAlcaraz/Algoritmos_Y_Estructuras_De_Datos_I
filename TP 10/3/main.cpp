#include "rectangulo.h"
#include <iostream>

using namespace std;

int main()
{
    float alto, ancho;
    Rectangulo rect1;

    cout << "----Calcular area y perimetro de un rectangulo\n\n" << endl;
    cout << "Introducir las medida del rectangulo\n" << endl;
    cout << " -Alto: ";
    cin >> alto;
    rect1.SetAltura(alto);

    cout << " -Base: ";
    cin >> ancho;
    rect1.SetBase(ancho);

    cout << "\n\n\n\n";
    cout << "El rectangulo tiene un alto de " << rect1.GetAltura()
        << " y una base de " << rect1.GetBase() << endl;
    cout << "\n---> El area del rectangulo es: " << rect1.area() << endl;
    cout << "\n---> El perimetro del rectangulo es: " << rect1.perimetro() << endl;

    return 0;
}
