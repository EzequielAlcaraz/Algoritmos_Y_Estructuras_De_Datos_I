#include <iostream>
#include <fstream>

using namespace std;

enum claseAvion{primera, bussiness, economica};

string cadClase(string c);

int main()
{
    string clase;
    ofstream archivo;

    archivo.open("prueba.txt");

    cout << "\nIndique en que clase quiere viajar: " << endl;
    cout << "   1. Primera Clase" << endl;
    cout << "   2. Clase Bussiness" << endl;
    cout << "   3. Clase Economica" << endl;
    cin >> clase;
    cadClase(clase);

    cout << "La clase es: " << clase << endl;

    archivo << clase;
    archivo.close();

    return 0;
}

string cadClase(string c)
{
    string cad;
    if (c == "1"){
        cad = "Primera";
    }
    if (c == "2"){
        cad = "Bussiness";
    }
    if (c == "3"){
        cad = "Economica";
    }
    return cad;
}

