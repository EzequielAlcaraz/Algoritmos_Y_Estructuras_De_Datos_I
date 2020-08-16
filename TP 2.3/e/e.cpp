#include <iostream>

using namespace std;

int main()
{
    float y1, y2, y3, y4, x1, x2, x3, x4;
    cout << "Para la formula y = 2 * x + 1, resolver y para 4 valores de x" << endl;
    cout << "1° valor de x: "; cin >> x1;
    cout << "2° valor de x: "; cin >> x2;
    cout << "3° valor de x: "; cin >> x3;
    cout << "4° valor de x: "; cin >> x4; cout << '\n' << '\n';

    y1 = 2 * x1 + 1;
    y2 = 2 * x2 + 1;
    y3 = 2 * x3 + 1;
    y4 = 2 * x4 + 1;

    cout << "Para el 1° valor de x, y = " << y1 << endl;
    cout << "Para el 2° valor de x, y = " << y2 << endl;
    cout << "Para el 3° valor de x, y = " << y3 << endl;
    cout << "Para el 4° valor de x, y = " << y4 << endl;

    return 0;
}

