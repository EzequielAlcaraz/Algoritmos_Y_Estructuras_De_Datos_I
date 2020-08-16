#include <iostream>

using namespace std;

int main()
{
    int dato1, dato2, dato3, promedio;
    cout << "Promedio de 3 datos" << endl;
    cout << "Dato 1: ";
    cin >> dato1;
    cout << "Dato 2: ";
    cin >> dato2;
    cout << "Dato 3: ";
    cin >> dato3;

    promedio = ( dato1 + dato2 + dato3 ) / 3;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
