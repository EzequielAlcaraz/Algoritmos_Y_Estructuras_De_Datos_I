#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char caracter, espacio;
    int contador = 0, lineas = 0, palabra = 0;
    //string palabra;
    ifstream contarArchivo;

    contarArchivo.open("frasesDeBjarme.txt");       //Abrir archivo

    if (contarArchivo.is_open()){                   //Si el archivo esta abierto

        while (!contarArchivo.eof()){               //Mientra el archivo no finalize

            contarArchivo.get(caracter);

            if (caracter == isalpha || espacio == ' '){
                while(caracter != ' '){
                        contador++;
                    if (espacio == ' ')
                        palabra++;
                    if (caracter == '\n')
                        lineas++;
                }
            }


            /*for(int i = 1; caracter[i] != isalpha; i++)
                palabra++;
                /*if(caracter[i] == ' ')
                    palabra++;
                if(caracter[i] == '\n')
                    lineas++;*/
        }
        cout << "La cantidad de palabras en el archivo es de: " << palabra << endl;
        cout << "El promedio de palabaras por linea es de: " << lineas << endl;
        contarArchivo.close();
    }
    else{
        cout << "ERROR: No se ha encontrado el archivo" << endl;
    }

    return 0;
}


