#include <iostream>

using namespace std;

//Prototipo de funciones
void intercambio(int& v1, int& v2);

int main()
{
    int num1, num2;
    cout << "Intercambiar el valor de 2 variables\n" << endl;
    cout << "Introducir 1° numero: ";
    cin >> num1;
    cout << "Introducir 2° numero: ";
    cin >> num2;

    cout << "Los numeros introducidos son: " << endl;
    cout << "El primero: " << num1 << endl;
    cout << "El segundo: " << num2 << endl;

    intercambio(num1, num2);
    cout << "\n\nUtilizando el intercambio de variables quedarian:" << endl;
    cout << "El primero: " << num1 << endl;
    cout << "El segundo: " << num2 << endl;
    return 0;
}

//Declaracion de funciones
void intercambio(int& v1, int& v2)
{
    int aux;
    aux = v1;
    v1 = v2;
    v2 = aux;
}



