#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int contLetra = 0;
    char letra[200];
    ifstream contarLetra;

    contarLetra.open("frasesDeBjarme.txt");

    if (contarLetra.is_open()){
        while (!contarLetra.eof()){

            for(int i=0; i<200; i++)
                contarLetra.get(letra[i]);
                contLetra++;
        }
        cout << "La cantidad de letras es: " << contLetra << endl;
        contarLetra.close();
    }
    else
        cout << "ERROR: No se ha encontrado el archivo" << endl;

    return 0;
}
