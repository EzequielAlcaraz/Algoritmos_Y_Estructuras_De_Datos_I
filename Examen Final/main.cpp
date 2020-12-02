#include "figura.h"
#include "circulo.h"
#include "cuadrado.h"
#include <iostream>

using namespace std;

void figCirculo();
void figCuadrado();

int op;
float rad, cua;

Figura *fig1 = new Circulo;
Figura *fig2 = new Cuadrado;

int main()
{
    do{
        system("cls");
        cout << "----Perimetro y area----\n\n" << endl;
        cout << "Elegir figura\n" << endl;
        cout << " 1.\tCirculo" << endl;
        cout << " 2.\tCuadrado" << endl;
        cout << "\nOpcion";
        cin >> op;
    } while(op > 0 || op < 3);
    cin.ignore();

    switch(op)
    {
    case 1:
        cout << "\n\nIngrese el radio del circulo: ";
        cin >> rad;
        figCirculo();
        break;
    case 2:
        cout << "\n\nIngrese el lado del cuadrado: ";
        cin >> cua;
        figCuadrado();
        break;
    }

    delete fig1;
    delete fig2;

    return 0;
}

void figCirculo()
{
    do{
        system("cls");
        cout << "----Elegir calculo a realizar----\n\n" << endl;
        cout << " 1.\tPerimetro" << endl;
        cout << " 2.\tArea" << endl;
        cout << "\nOpcion:";
        cin >> op;

    } while(op > 0 || op < 3);
    cin.ignore();

    switch(op)
    {
    case 1:
        cout << "\n\nEl perimetro del circulo es: ";
        fig1->Perimetro(rad);
        break;
    case 2:
        fig1->Area(rad);
        break;
    }
}

void figCuadrado()
{
    do{
        system("cls");
        cout << "----Elegir calculo a realizar----\n\n" << endl;
        cout << " 1.\tPerimetro" << endl;
        cout << " 2.\tArea" << endl;
        cout << "\nOpcion:";
        cin >> op;
    } while(op > 0 || op < 3);
    cin.ignore();

    switch(op)
    {
    case 1:
        cout << "\n\nEl perimetro del cuadrado es: ";
        fig2->Perimetro(cua);
        break;
    case 2:
        cout << "\n\nEl perimetro del circulo es: ";
        fig2->Area(cua);
        break;
    }
}
