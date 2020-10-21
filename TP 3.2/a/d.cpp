#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char caracter;
    int contador = 0, lineas = 0, letras = 0;
    string palabra;
    ifstream palabraLarga;

    palabraLarga.open("frasesDeBjarme.txt");

    if(palabraLarga.is_open())
    {
        while(!palabraLarga.eof()){

            palabraLarga.getline(palabra);


            cout << "La palabra mas larga tiene " << palabra.lenght() << " letras" << endl;
        }
        palabraLarga.close();
    }
    else{
        cout << "ERROR: No se ha encontrado el archivo" << endl;
    }

    return 0;
}

