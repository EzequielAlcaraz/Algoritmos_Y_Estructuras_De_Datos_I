#include<iostream>

using namespace std;

//Prototipo de funciones
float parteFrac(float x);

//Codigo
int main()
{
    float n;
    cout << "Programa para calcular la parte fraccionaria de un numero decimal \n" << endl;
    cout << "Introduzca un numero: ";
    cin >> n;

    cout << "La parte fraccionaria del numero es: " << parteFrac(n) << endl;
    return 0;
}

//Declaracion de funciones
float parteFrac(float n)
{
    int entero = n;
    float resultado = n - entero;
    return resultado;
}
