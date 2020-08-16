#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Introducir 2 numeros siempre que el primero sea menor que el segundo" << '\n' << endl;
    cout << "Introducir primer numero: "; cin >> num1;
    cout << "Introducir segundo numero: "; cin >> num2;
    cout << '\n';


    while (num2 <= num1){
        cout << '\n' << "El segundo numero debe ser mayor que el primero" << endl;
        cout << "Introducir el segundo numero: "; cin >> num2;
    }
    cout << '\n' << "Los numeros introducidos son: " << endl;
    cout << "El primero: " << num1 << endl;
    cout << "EL segundo: " << num2 << endl;

    return 0;
}
