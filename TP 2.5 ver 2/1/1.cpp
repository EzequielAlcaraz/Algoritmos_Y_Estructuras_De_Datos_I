#include <iostream>

using namespace std;

//Prototipo de funciones
float mult(float num1, float num2);

int main()
{
    float n1, n2;
    cout << "Multiplicacion de 2 numeros decimales a partir de una funcion\n" << endl;
    cout << "Insertar los numeros" << endl;
    cout << "Numero 1: ";
    cin >> n1;
    cout << "Numero 2: ";
    cin >> n2;

    cout << "\n\nEl producto de los numeros introducidos es: " << mult(n1, n2) << endl;
    return 0;
}

//Declaracion de funciones
float mult(float num1, float num2)
{
    return num1 * num2;
}
