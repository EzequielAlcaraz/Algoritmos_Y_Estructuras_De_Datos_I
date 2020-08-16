#include <iostream>

using namespace std;

int main()
{
    int x = 0, suma = 0;
    cout << "Suma de numeros positivos" << endl;
    cout << "Recuerde que para terminar el programa debe ingresar un numero negativo \n" << endl;
    cout << "Introducir numero: "; cin >> x;

    while (x > 0){
        suma = suma + x;
        cout << "Introducir num: "; cin >> x;
    }
    cout << "La suma de los numeros introducidos es: " << suma << endl;
    return 0;
}
