#include <iostream>
#include <conio.h>

using namespace std;

void menu();
void menuEnvio();
void pedido();
void producto();
void envio();

int prod, env;

int main()
{
    menu();
}

void menu()
{
    system("cls");
    cout << "Aplicacion para toma de pedidos\n" << endl;
    cout << "Opciones de productos" << endl;
    cout << "   1. Simple" << endl;
    cout << "   2. Medio" << endl;
    cout << "   3. Calidad" << endl;
    cout << "   4. Premium" << endl;
    cin >> prod;

    switch(prod){
    case 1:
    case 2:
    case 3:
    case 4:
        menuEnvio();
        break;
    default:
        {
            cout << "\nEste valor no es valido" << endl;
            getch();
            menu();
        }
    }

}

void menuEnvio()
{
    system("cls");
    cout << "Tipo de envio\n" << endl;
    cout << "   1. Normal" << endl;
    cout << "   2. Express" << endl;
    cout << "   3. Fast Delivery" << endl;
    cin >> env;

    switch(env){
    case 1:
    case 2:
    case 3:
        pedido();
        break;
    default:
        cout << "\nEste valor no es valido" << endl;
        getch();
        menuEnvio();
    }
}

void pedido()
{
    system("cls");
    cout << "Comprobante de las opciones elegidas\n" << endl;
    cout << "Producto: ";
    producto();
    cout << "Envio: ";
    envio();
}

void producto()
{
    switch(prod){
    case 1:
        cout << "Simple" << endl;
        break;
    case 2:
        cout << "Medio" << endl;
        break;
    case 3:
        cout << "Calidad" << endl;
        break;
    case 4:
        cout << "Premium" << endl;
    }
}

void envio()
{
    switch(env){
    case 1:
        cout << "Normal" << endl;
        break;
    case 2:
        cout << "Express" << endl;
        break;
    case 3:
        cout << "Fast Delivery" << endl;
    }
}
