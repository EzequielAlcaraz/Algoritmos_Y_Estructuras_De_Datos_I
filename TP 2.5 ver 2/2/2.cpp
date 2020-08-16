#include <iostream>

using namespace std;

//Prototipo de funciones
float al_cuadrado(float valor);

int main()
{
    float num;
    cout << "Calcular el cuadrado de un numero a partir de una funcion" << endl;
    cout << "\nIntroducir el numero deseado (puede ser decimal): ";
    cin >> num;

    cout << "El cuadrado del numero introducido es: " << al_cuadrado(num) << endl;
    return 0;
}

//Declaracion de funciones
float al_cuadrado(float valor)
{
    return valor * valor;
}

