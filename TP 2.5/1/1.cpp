#include <iostream>

using namespace std;

//Prototipo de funcion
float mult(float x, float y);

//Codigo
int main()
{
    float num1, num2;
    cout << "Multiplicacion de 2 numeros \n" << endl;
    cout << "Introducir los numeros: " << endl;
    cin >> num1;
    cin >> num2; cout << '\n';
    cout << "El pruducto entre los numeros introducidos es: " << mult (num1, num2) << endl;
    return 0;
}

//Declaracion de funcion
float mult(float x, float y)
{
    float producto;
    producto = x * y;
    return producto;
}
