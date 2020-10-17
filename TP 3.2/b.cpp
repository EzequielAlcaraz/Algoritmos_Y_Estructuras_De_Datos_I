#include <iostream>
#include <fstream>

using namespace std;

        //while(getchar()!='\n')

int main()
{
    string frase;
    ifstream leerFrase;

    leerFrase.open("frasesDeBjarme.txt");   //Abrir archivo

    if (leerFrase.is_open()){               //Si el archivo se abre/existe

        while (!leerFrase.eof()){           //Mientras no sea el final del archivo
            getline(leerFrase, frase);
            cout << frase << endl;
        }

        leerFrase.close();
    }
    else {                                  //Si el archivo no se abre
        cout << "ERROR: No se ha encontrado el archivo" << endl;
    }

    return 0;
}


