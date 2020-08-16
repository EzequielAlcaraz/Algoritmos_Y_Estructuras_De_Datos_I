#include <iostream>

using namespace std;

//Prototipo de funciones
float al_cuadrado (float x);

//Codigo
int main()
{
    float n;
    cout << "Programa para calcular el cuadrado de un numero \n" << endl;
    cout << "Introducir un numero (puede ser decimal): ";
    cin >> n; cout << '\n';

    cout << "El cuadrado del numero introducido (" << n << ") es: " << al_cuadrado (n) << endl;
    return 0;
}

float al_cuadrado (float x)
{
    float cuadrado;
    cuadrado = x * x;
    return cuadrado;
}
