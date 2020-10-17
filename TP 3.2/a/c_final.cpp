#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char espacio;
    string palabra;
    ifstream contarArchivo;
    int contador = 0, linea = 0;

    contarArchivo.open("frasesDeBjarme.txt");

    if(contarArchivo.is_open()){
        while(!contarArchivo.eof()){
            while(contarArchivo >> palabra || palabra == "\n"){
                contador++;
                cout << palabra << endl;
                if(palabra == "\n")
                    linea++;
            }
            /*while(getline(contarArchivo, palabra)){
                contador++;
            }
            while(contarArchivo >> palabra){
                if(palabra == "\n")
                    linea++;
            }*/
        }
        cout << "La cantidad de palabras es de: " << contador << endl;
        cout << "La cantidad de lineas es de: " << linea << endl;

        contarArchivo.close();
    }
    else{
        cout << "ERROR: No se ha encontrado el archivo" << endl;
    }


    return 0;
}
