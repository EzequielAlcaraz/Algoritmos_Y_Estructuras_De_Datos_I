#include <iostream>
#include <conio.h>

using namespace std;

void menu();
void cmap();
void csafr();
void lbakg();

int main()
{
    menu();
}

void menu()
{
    system("cls");
    int op;
    cout << "Convertidor de unidades\n" << endl;
    cout << "Seleccione la convercion a realizar\n" << endl;
    cout << "   1. De centimetros a pulgadas" << endl;
    cout << "   2. De Celsius a Fahrenheit" << endl;
    cout << "   3. De libras a kilogramos" << endl;
    cout << "   4. Finalizar programa" << endl;
    cin >> op;

    switch (op){
    case 1:
        cmap();
        break;
    case 2:
        csafr();
        break;
    case 3:
        lbakg();
        break;
    case 4:
        break;
    default:
        {
            cout << "\nEste valor no es valido" << endl;
            getch();
            menu();
        }
    }
}

void cmap()
{
    system("cls");
    double cm, pulg;
    int selec;

    cout << "Pasar de centimetros a pulgadas\n" << endl;
    cout << "Introduzca la longitud deseada en centimetros: ";
    cin >> cm;

    pulg = cm / 2.54;
    cout << "\n----> "<< cm << " cm = " << pulg << " in" << endl;

    cout << "\n\n¿Desea realizar otra operacion?\n" << endl;
    cout << "   1. Volver a convertir de centimetros a pulgadas" << endl;
    cout << "   2. Volver al menu" << endl;
    cout << "   3. Finalizar programa" << endl;
    cin >> selec;

    switch (selec){
    case 1:
        cmap();
        break;
    case 2:
        menu();
        break;
    case 3:
        break;
    default:
        {
            system("cls");
            cout << "Este valor no es valido\n" << endl;
            cout << "Sera reedirigido al menu principal" << endl;
            getch();
            menu();
        }
    }
}

void csafr()
{
    system("cls");
    double cel, far;
    int selec;

    cout << "Pasar de Celsius a Fahrenheit\n" << endl;
    cout << "Introduzca la temperatura deseada en °Celsius: ";
    cin >> cel;

    far = (cel * 9/5) + 32;
    cout << "\n----> "<< cel << " Celsius = " << far << " Fahrenheit" << endl;

    cout << "\n\n¿Desea realizar otra operacion?\n" << endl;
    cout << "   1. Volver a convertir de grados Celsius a Fahrenheit" << endl;
    cout << "   2. Volver al menu" << endl;
    cout << "   3. Finalizar programa" << endl;
    cin >> selec;

    switch (selec){
    case 1:
        csafr();
        break;
    case 2:
        menu();
        break;
    case 3:
        break;
    default:
        {
            system("cls");
            cout << "Este valor no es valido\n" << endl;
            cout << "Sera reedirigido al menu principal" << endl;
            getch();
            menu();
        }
    }
}

void lbakg()
{
    system("cls");
    double lib, kg;
    int selec;

    cout << "Pasar de libras a kilogramos\n" << endl;
    cout << "Introduzca el peso deseado en libras: ";
    cin >> lib;

    kg = lib / 2.205;
    cout << "\n----> "<< lib << " lb = " << kg << " kg" << endl;

    cout << "\n\n¿Desea realizar otra operacion?\n" << endl;
    cout << "   1. Volver a convertir de libras a kilogramos" << endl;
    cout << "   2. Volver al menu" << endl;
    cout << "   3. Finalizar programa" << endl;
    cin >> selec;

    switch (selec){
    case 1:
        lbakg();
        break;
    case 2:
        menu();
        break;
    case 3:
        break;
    default:
        {
            system("cls");
            cout << "Este valor no es valido\n" << endl;
            cout << "Sera reedirigido al menu principal" << endl;
            getch();
            menu();
        }
    }
}
