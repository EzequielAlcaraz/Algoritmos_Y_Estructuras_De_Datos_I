#include "vehiculo.h"
#include "taller.h"
#include <iostream>

using namespace std;

int main()
{
    int op;

    cout << "----Vahiculos en el taller----\n\n" << endl;
    cout << "Numero maximo de vehiculos: ";
    cin >> op;
    cin.ignore();
    Taller *taller = new Taller(op);

    do{
        system("cls");
        cout << "----Vahiculos en el taller----\n\n" << endl;
        cout << " 1.\tIntroducir vehiculo en el taller" << endl;
        cout << " 2.\tReparar vehiculos del taller" << endl;
        cout << " 3.\tSalir" << endl;
        cout << "\nOpcion";
        cin >> op;
        cin.ignore();
    }while(op > 0 || op < 4);

    switch(op)
    {
    case 1:
        break;
    case 2:
        break;
    }

    cout << "Hello world!" << endl;
    return 0;
}
