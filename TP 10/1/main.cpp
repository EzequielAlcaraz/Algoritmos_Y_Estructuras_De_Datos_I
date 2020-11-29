#include "articulo.h"
#include <iostream>

using namespace std;

int main()
{
    float costoB;
    Articulo art1;

    cout << "----PVP de un Articulo----\n\n" << endl;
    cout << "Introducir el costo base del articulo" << endl;
    cout << "CB: ";
    cin >> costoB;

    art1.SetCostoBase(costoB);
    cout << "\n\nPara un articulo con un costo base = " << art1.GetCostoBase() << " :" << endl;
    cout << "\n-->El precio de venta al publico al mayor es de: $"
        << art1.PVPMayor() << endl;
    cout << "\n-->El precio de venta al publico al detal es de: $"
        << art1.PVPDetal() << endl;

    return 0;
}
