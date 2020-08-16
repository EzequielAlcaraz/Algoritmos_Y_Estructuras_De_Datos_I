#include <iostream>

using namespace std;

//Prototipo de funciones
void duplicar(int&, int&);

//Codigo
int main()
{
    int a = 5, b = 8;
    cout << "Duplicar valores" << endl;
    cout << "El primer valor es: " << a << endl;
    cout << "El segundo valor es: " << b << endl;

    duplicar (a, b);

    cout << "Valores duplicados a partir de la funcion" << endl;
    cout << "El primer valor es: " << a << endl;
    cout << "El segundo valor es: " << b << endl;

    return 0;
}

void duplicar(int& a, int& b)
{
    a = a * 2;
    b = b * 2;
}
