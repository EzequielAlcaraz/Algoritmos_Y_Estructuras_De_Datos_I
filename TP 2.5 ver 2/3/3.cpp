#include <iostream>
#include <math.h>

using namespace std;

//Prototipo de funciones
int funpot(int base, int exponente);

int main()
{
    int numb, nump;
    cout << "Calcular la potencia deseada de un nuemero deseado" << endl;
    cout << "Introducir nuemero base: ";
    cin >> numb;
    cout << "Introducir el exponente: ";
    cin >> nump;

    cout << "La potencia, utilizando la base y exponente introducidos, es: " << funpot(numb, nump) << endl;
    return 0;
}

int funpot(int base, int exponente)
{
    return pow(base, exponente);
}

