#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int contLetra = 0;
    const int MAX = 200;
    typedef char tLetra[MAX];
    tLetra letra;
    string texto;
    ifstream contarLetra;

    contarLetra.open("frasesDeBjarme.txt");

    if (contarLetra.is_open()){
        while (!contarLetra.eof()){

            while(contarLetra >> texto)
                cout << texto << endl;

            for(int i=0; i<MAX; i++)
                contarLetra.get(letra[i]);
                /*if(letra[i] == ' '){

                }*/
                contLetra++;
        }
        cout << "La cantidad de letras es: " << contLetra << endl;
        contarLetra.close();
    }
    else
        cout << "ERROR: No se ha encontrado el archivo" << endl;

    return 0;
}
