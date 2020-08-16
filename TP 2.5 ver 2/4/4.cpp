#include <iostream>

using namespace std;

//Prototipo de funciones
float parteFrac(float dec);

int main()
{
    float num;
    cout << "Calcular la parte decimal de un numero decimal" << endl;
    cout << "Introducir el numero decimal: ";
    cin >> num;

    cout << "\nLa parte deciamal del numero introducido es: " << parteFrac(num) << endl;
    return 0;
}

float parteFrac(float dec)
{
    int entero = dec;
    float decimal = dec - entero;
    return decimal;
}


