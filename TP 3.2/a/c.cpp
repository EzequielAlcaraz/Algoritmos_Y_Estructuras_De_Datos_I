#include <iostream>
#include <fstream>

using namespace std;

void contarPalabras();

int main()
{
    char caracter;
    int contador = 0, lineas = 0;
    string palabra;
    ifstream contarArchivo;

    contarArchivo.open("frasesDeBjarme.txt");

    if (contarArchivo.is_open()){

        while (!contarArchivo.eof()){
            contarArchivo >> palabra;
            contador++;

            /*if(palabra == "\n"){
                lineas++;
            }
            /*while (caracter != '\n'){
                contarArchivo >> palabra;
                contador++;
            }
            lineas++;*/
        }
        cout << "La cantidad de palabras en el archivo es de: " << contador << endl;
        //cout << "El promedio de palabaras por linea es de: " << contador / lineas << endl;
        contarArchivo.close();
    }
    else{
        cout << "ERROR: No se ha encontrado el archivo" << endl;
    }

    return 0;
}

void contarPalabras()
{

}
