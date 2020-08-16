#include <iostream>

using namespace std;

int main ()
{
    int num, x = 0, suma = 0, par = 0, impar = 0;

    cout << "Calcular la suma de numeros pares e impares desde el 1 hasta el numero deseado" << '\n' << endl;
    cout << "Introducir numero: "; cin >> num;

    while (x <= num){
        suma = suma + x;
        if (x % 2 == 0){
            par = par + x;
        }
        else {
            impar = impar + x;
        }
        x++;
    }
    cout << "La suma de numeros desde el 1 hasta el " << num << " es " << suma << endl;
    cout << "La suma de numeros pares desde el 1 hasta el " << num << " es " << par << endl;
    cout << "La suma de numeros impares desde el 1 hasta el " << num << " es " << impar << endl;
    return 0;
}
