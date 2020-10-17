#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int contador = 0, linea = 0;
    string palabra;
    ifstream contarArchivo;

    contarArchivo.open("frasesDeBjarme.txt");

    if(contarArchivo.is_open())
    {
        while(!contarArchivo.eof()){

            while(contarArchivo >> palabra){
                contador++;
            }

            contarArchivo.clear();
            contarArchivo.seekg(0, contarArchivo.beg);

            while(getline(contarArchivo, palabra)){
                linea++;
            }

            cout << "La cantidad de palabras es: " << contador << endl;
            cout << "La cantidad de lineas es: " << linea << endl;

            contarArchivo.close();
        }
    }
    else{
        cout << "ERROR: No se ha encontrado el archivo" << endl;
    }

    return 0;
}
