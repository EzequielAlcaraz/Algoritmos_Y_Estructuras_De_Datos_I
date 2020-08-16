#include <iostream>
#include <math.h>

using namespace std;

//Prototipo de funciones
int funpot(int x, int y);

//Codigo
int main()
{
    int nBase, nExpo;
    cout << "Programa para calcular la potencia de un numero (x) elevado a numero deseado (y) \n" << endl;
    cout << "Tanto la base como el exponente deben ser numeros enteros" << endl;
    cout << "Introcucir base (x): ";
    cin >> nBase;
    cout << "Introducir exponente (y): ";
    cin >> nExpo;
    cout << '\n';

    cout << "La potencia de base " << nBase << " y exponente " << nExpo << " es: " << funpot(nBase, nExpo) << endl;
    return 0;
}

int funpot(int x, int y)
{
    int potencia;
    potencia = pow(x, y);
    return potencia;
}

