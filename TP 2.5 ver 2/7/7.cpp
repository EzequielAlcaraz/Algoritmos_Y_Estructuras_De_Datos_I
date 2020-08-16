#include <iostream>

using namespace std;

//Prototipo de funciones
float cambio(int pesos);

int main()
{
    int pesos;
    cout << "Pasar de pesos a dolares" << endl;
    cout << "Introduzca la cantidad deseada en pesos: ";
    cin >> pesos;

    cout << "\nLa cantidad introducida en pesos pasada a dolares es: " << cambio(pesos) << endl;
    return 0;
}

//Declaracion de funciones
float cambio(int pesos)
{
    return pesos / 70.04;
}
