#include "persona.h"
#include <iostream>

using namespace std;

int main()
{
    int anio, mes, dia;
    string nombre;
    Persona per1;

    cout << "----Calcular edad a pertir de la fecha de nacimiento----\n\n" << endl;
    cout << "\nIngresar fecha actual\n" << endl;
    cout << "Anio: ";
    cin >> anio;
    cout << "Mes: ";
    cin >> mes;
    cout << "Dia: ";
    cin >> dia;

    per1.SetAnnoact(anio);
    per1.SetMesact(mes);
    per1.SetDiaact(dia);
    cin.ignore();

    cout << "\n\nIngresar nombre: ";
    cin >> nombre;
    cout << "\nIngresar fecha de nacimiento\n" << endl;
    cout << "Anio: ";
    cin >> anio;
    cout << "Mes: ";
    cin >> mes;
    cout << "Dia: ";
    cin >> dia;

    per1.SetNombre(nombre);
    per1.SetAnno(anio);
    per1.SetMes(mes);
    per1.SetDia(dia);
    cin.ignore();

    cout << "\n\n\n\n";
    cout << "Fecha actual: " << per1.GetDiaact() << "/" << per1.GetMesact() << "/"
        << per1.GetAnnoact() << endl;
    cout << "\nFecha de nacimiento: " << per1.GetDia() << "/" << per1.GetMes() << "/"
        << per1.GetAnno() << endl;
    cout << "\n\n---> " << per1.GetNombre() << " tiene " << per1.obtenerEdad()
        << " anios" << endl;

    return 0;
}
