#include <iostream>

using namespace std;

int main()
{
    float x = 1, suma = 0, valor, promedio;

    cout << "Calcular el promedio de los numeros deseados" << '\n' << endl;
    cout << "Introduzca el numero que quiera y precione enter para continuar" << endl;
    cout << "Recuerde introducir 99 para terminar la operacion" << '\n' << endl;

    while (valor != 99){
        cout << "Introduzca el numero: ";
        cin >> valor;
        suma = suma + valor;
        x = x + 1;
    }
    promedio = suma / x;
    cout << "Los numeros introducidos fueron: " << x << endl;
    cout << "El promedio de los numeros introcidos es: " << promedio << endl;
    return 0;
}
