#include <iostream>

using namespace std;

int main()
{
    int dato1, dato2, dato3, dato4, producto;
    cout << "Producto de 4 datos" << endl;
    cout << "Dato 1: ";
    cin >> dato1;
    cout << "Dato 2: ";
    cin >> dato2;
    cout << "Dato 3: ";
    cin >> dato3;
    cout << "Dato 4: ";
    cin >> dato4;

    producto = dato1 * dato2 * dato3 * dato4;
    cout << "El producto es: " << producto << endl;

    return 0;
}
