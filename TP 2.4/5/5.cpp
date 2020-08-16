#include <iostream>

using namespace std;

int main ()
{
    int num, x = 1, suma = 0;

    cout << "Calcular la suma de numeros desde el 1 hasta el numero deseado" << '\n' << endl;
    cout << "Introducir numero: "; cin >> num;

    while (x <= num){
        suma = suma + x;
        x++;
    }
    cout << "La suma de numeros desde el 1 hasta el " << num << " es " << suma << endl;
    return 0;
}
