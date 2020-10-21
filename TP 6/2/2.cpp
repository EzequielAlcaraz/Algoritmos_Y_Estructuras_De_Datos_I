#include <iostream>
#include <string>

using namespace std;

const int MAX = 10;
typedef string tFrase[MAX];
tFrase frase;

int main()
{
    string oracion, palabra;
    char espacio = ' ';
    int pos, letras = 0;

    cout << "----Calcular cantidad de letras por palabra----" << endl;
    cout << "\n\nIntroducir una frase deseada: ";
    getline(cin, oracion);
    oracion += " ";

    cout << "\n" << endl;

    for(pos = 0; pos < oracion.size(); pos++){
        if(oracion.at(pos) != espacio){
            letras++;
            palabra += oracion.at(pos);
        }
        else{
            cout << palabra << " ---> " << letras << " letras" << endl;;
            letras = 0;
            palabra = "";
        }
    }

    return 0;
}
