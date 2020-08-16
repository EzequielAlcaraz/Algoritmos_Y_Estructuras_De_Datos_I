#include <iostream>

using namespace std;

//Prototipo de funciones
void tiempo(int totalSeg, int& horas, int& minu, int& seg);

//Codigo
int main()
{
    int totalSeg, horas, minu, seg;
    cout << "Pasar de segundos a horas, minutos y segundos \n" << endl;
    cout << "Ingresar la cantidad de segundos: ";
    cin >> totalSeg;

    tiempo (totalSeg, horas, minu, seg);

    cout << "\n El tiempo introducido en segundos, equivale a: " << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minu << endl;
    cout << "Segundos: " << seg << endl;
    return 0;
}

//Declaracion de funciones
void tiempo(int totalSeg, int& horas, int& minu, int& seg)
{
    horas = totalSeg / 3600;
    totalSeg %= 3600;
    minu = totalSeg / 60;
    seg = totalSeg % 60;
}

