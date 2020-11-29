#include "alumno.h"
#include <iostream>

using namespace std;

int main()
{
    string name, cedul;
    float note1, note2, note3;
    Alumno alum1;

    cout << "----Condicion de aprobacion de un alumno----\n\n" << endl;
    cout << "Nombre del alumno: ";
    cin >> name;
    alum1.SetNombre(name);

    cout << "\nCedula del alumno: ";
    cin >> cedul;
    alum1.SetCedula(cedul);

    cout << "\nNota Num. 1: ";
    cin >> note1;
    alum1.SetNota1(note1);

    cout << "Nota Num. 2: ";
    cin >> note2;
    alum1.SetNota2(note2);

    cout << "Nota Num. 3: ";
    cin >> note3;
    alum1.SetNota3(note3);

    cout << "\n\n\n\n";
    cout << "Alumno: " << alum1.GetNombre() << " :\n" << endl;
    cout << "Cedula: " << alum1.GetCedula() << endl;
    cout << "\n -Nota 1: " << alum1.GetNota1() << endl;
    cout << " -Nota 2: " << alum1.GetNota2() << endl;
    cout << " -Nota 3: " << alum1.GetNota3() << endl;
    cout << "\nLa nota final del alumno es: " << alum1.NotaFinal() << endl;
    cout << "\n---> El alumno esta " << alum1.AproRepro() << endl;


    return 0;
}
