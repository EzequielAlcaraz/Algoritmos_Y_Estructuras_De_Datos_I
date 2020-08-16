#include <iostream>

using namespace std;

//Prototipo de funciones
float cambio(int x);

//Codigo
int main()
{
    int pesos;
    cout << "Convertidor de peso a dolar \n" << endl;
    cout << "Introducir la cantidad deseada en $: ";
    cin >> pesos;

    cout << "La cantidad introducida (" << pesos << ") son: " << cambio(pesos) << " dolares" << endl;
    return 0;
}

//Declaracion de funcio
float cambio(int x)
{
    float dolar = 69.38, total;
    total = x / dolar;
    return total;
}
