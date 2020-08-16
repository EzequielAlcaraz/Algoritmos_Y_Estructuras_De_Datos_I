#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char caracter;
    int contador = 0, lineas = 0, letras = 0;
    string palabra;
    ifstream contarArchivo;

    contarArchivo.open("frasesDeBjarme.txt");

    if (contarArchivo.is_open()){

        while (!contarArchivo.eof()){
            contarArchivo.get(caracter);

            if(caracter == ' '){
                contador++;
            }
            if(caracter == '\n'){
                lineas++;
            }
            letras++;
        }
        cout << "La palabra mas larga en el archivo tiene: " << letras << " letras" << endl;
        contarArchivo.close();
    }
    else{
        cout << "ERROR: No se ha encontrado el archivo" << endl;
    }

    return 0;
}

