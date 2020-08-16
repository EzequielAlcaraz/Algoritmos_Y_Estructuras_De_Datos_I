#include <iostream>

using namespace std;

void resta();
void numeros();

int x, y, rest;

int main()
{
    cout << "Introducir dos numeros\n" << endl;
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    resta();
}

void resta()
{
    rest = x - y;
    if(rest <= 10){
        numeros();
    }
    cout << "\nLa diferencia entre X e Y es: " << rest << endl;
}

void numeros()
{
    system("cls");
    cout << "La diferencia entre X e Y es menor o igual a 10" << endl;
    if(rest <= 10){
        cout << "\nLos numeros entre Y y X son: " << endl;
        while(y <= x){
            cout << y << endl;
            y++;
        }
    }
}
