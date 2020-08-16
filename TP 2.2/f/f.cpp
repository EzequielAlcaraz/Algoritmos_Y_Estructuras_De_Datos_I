#include <iostream>

using namespace std;

int main()
{
    double gradosf, gradosc;
    cout << "Transformar de Grados F a Grados C" << endl;
    cout << "Introducir temperatura en Grados F: ";
    cin >> gradosf;

    gradosc = ( gradosf - 32 ) * 5 / 9 ;

    cout << gradosf << " Grados F a Grados C, son: " << gradosc << " Grados C" << endl;

    return 0;
}
