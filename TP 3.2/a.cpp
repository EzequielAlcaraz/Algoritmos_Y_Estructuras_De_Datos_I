#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string frase;
    ofstream archivo;
    archivo.open("frasesDeBjarme.txt");

    cout << "Introduzca la frase que desee. Esta se guardara en un archivo de texto" << endl;
    cout << "\nPara terminar el programa escriba fin" << endl;
    getline(cin, frase);
    archivo << frase << endl;

    while (frase != "fin"){
        cout << "\nIntroduzca la frase que desee.Para terminar el escriba fin" << endl;
        getline(cin, frase);

        if (frase == "fin"){
            archivo.close();
        }
        archivo << frase << endl;
    }

    return 0;
}
