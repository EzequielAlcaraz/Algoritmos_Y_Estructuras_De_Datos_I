#include <iostream>

using namespace std;

int main()
{
    const int horas = 3600, minutos = 60;
    int t, s, m, h;
    cout << "Tiempo transcurrido en segundos: " << endl;
    cin >> t;

    h = t / horas;
    t = t % horas;
    m = t / minutos;
    s = t % minutos;
    cout << "Horas: " << h << endl;
    cout << "Minutos: " << m << endl;
    cout << "Segundos: " << s << endl;
    return 0;
}
