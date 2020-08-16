#include <iostream>

using namespace std;

//typedef de las frutas
typedef enum{frutilla, naranja, manzana, pomelo, uva, kiwi}tFrutas;
tFrutas frutas;
int f = int(frutas);

//Prototipo de procedimiento para mostrar datos
void frutasCant();

int main()

{
    int kg;
    string codigo, razon, fechaSoli, fechaEntre;

    cout << "Pedido para mayorista" << endl;
    cout << "\nIntroduzca codigo proveedor: ";
    getline(cin, codigo);

    cout << "\nIntroduzca razon social: ";
    getline(cin, razon);

    cout << "\nFecha de solicitud: ";
    getline(cin, fechaSoli);

    cout << "\nFecha de entrega: ";
    getline(cin, fechaEntre);

    cout << "\nElegir la fruta y su cantidad" << endl;

    cout << "   1. Frutilla" << endl;
    cout << "   2. Naranja" << endl;
    cout << "   3. Manzana" << endl;
    cout << "   4. Pomelo" << endl;
    cout << "   5. Uva" << endl;
    cout << "   6. Kiwi" << endl;
    cin >> f;

    cout << "Cantidad (kg): " << endl;
    cin >> kg;

    cout << "\nEl pedido se realizo correctamente" << endl;

    cout << "\n\nDatos del Pedido\n" << endl;
    cout << "Codigo Proveedor: " << codigo << endl;
    cout << "Razon Social: " << razon << endl;
    cout << "Fecha de Solicitud: " << fechaSoli << endl;
    cout << "Fecha de Entrega: " << fechaEntre << endl;
    cout << "Fruta solicitada: ";
    frutasCant();
    cout << "Cantidad de fruta solicitada: " << kg << " kg" << endl;


    return 0;
}

//Procedimiento para mostrar datos
void frutasCant()
{
    if (f == 1)
        cout << "Frutilla" << endl;
    if (f == 2)
        cout << "Naranja" << endl;
    if (f == 3)
        cout << "Manzana" << endl;
    if (f == 4)
        cout << "Pomelo" << endl;
    if (f == 5)
        cout << "Uva" << endl;
    if (f == 6)
        cout << "Pomelo" << endl;
}

