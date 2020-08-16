#include <iostream>

using namespace std;

int main()
{
    short int edad;
    char s;
    double altura;

    cout << "Ingrese sus datos" << endl;
    cout << "Edad: "; cin >> edad;
    cout << "Sexo (M/F): "; cin >> s;
    cout << "Altura: "; cin >> altura;

    cout << '\n';
    cout << "Usted tiene una edad de " << edad << " años, es " << s << " y mide " << altura << " metros." << endl;

    return 0;
}
