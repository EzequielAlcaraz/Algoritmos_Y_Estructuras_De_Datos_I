#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int tamano = 0, larga = 0;
    char caracter;
    string palabra, lar;
    ifstream palabraLarga;

    palabraLarga.open("frasesDeBjarme.txt");

    if(palabraLarga.is_open())
    {
        while(!palabraLarga.eof()){
            while(getline(palabraLarga, caracter)){
                palabra.lenght() = tamano;

                if(tamano > larga)
                    palabra.lenght() = larga;
            }
            cout << "La palabra mas larga tiene " << tamano << " letras" << endl;
        }
        palabraLarga.close();
    }
    else{
        cout << "ERROR: No se ha encontrado el archivo" << endl;
    }

    return 0;
}
