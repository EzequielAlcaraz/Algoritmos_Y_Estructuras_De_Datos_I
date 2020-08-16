#include <iostream>

using namespace std;

int main()
{
    float m, x1, x2, y1, y2;
    cout << "Para la formula m = (y2 - y1) / (x2 - x1)" << endl;
    cout << "Ingresar y1: "; cin >> y1;
    cout << "Ingresar y2: "; cin >> y2;
    cout << "Ingresar x1: "; cin >> x1;
    cout << "Ingresar x2: "; cin >> x2;

    m = (y2 - y1) / (x2 - x1);

    cout << "El valor de m es: " << m << endl;

    return 0;

}
