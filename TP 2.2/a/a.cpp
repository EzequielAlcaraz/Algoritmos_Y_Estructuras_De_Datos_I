#include <iostream>
using namespace std;

int main()
{
    int ano_de_nacimiento, fecha;

    cout << "Introducir año de nacimiento: " << endl;
    cin >> ano_de_nacimiento;

    fecha = 2020 - ano_de_nacimiento;
    cout << "Su edad es de: " << fecha << " años." << endl;

    return 0;
}

