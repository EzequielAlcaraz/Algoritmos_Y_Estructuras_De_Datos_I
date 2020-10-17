#include <iostream>

using namespace std;

int main()
{
    const int CANT = 5;

    typedef struct{
        string nombre;
        string autor;
        int isbn;
    } tLibros;

    typedef tLibros tArray[CANT];

    tArray libro;

    cout << "Programa para crear base de datos de libros\n" << endl;

    for(int i = 0; i < CANT - 1; i++){
        cout << "\nLibro numero " << i << endl;
        cout << "Introducir nombre: "; cin >> libro[i].nombre;
        cout << "Introducir nombre de autor: "; cin >> libro[i].autor;
        cout << "Introducir numero ISBN: "; cin >> libro[i].isbn;
    }

    cout << "\n\n\nLibros: \n" << endl;

    for(int i = 0; i < CANT - 1; i++){
        cout << "\nLibro numero " << i << endl;
        cout << "Nombre: " << libro[i].nombre << endl;
        cout << "Autor: " << libro[i].autor << endl;
        cout << "ISBN: " << libro[i].isbn << endl;
    }

    return 0;
}
