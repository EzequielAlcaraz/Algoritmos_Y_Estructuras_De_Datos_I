#include <iostream>

using namespace std;

int main()
{
    string palabra;
    string *pPalabra;
    pPalabra = &palabra;
    int vocalA = 0, vocalE = 0, vocalI = 0, vocalO = 0, vocalU = 0;

    cout << "----Introducir una cadena de caracteres----\n" << endl;
    getline(cin, palabra);

    for(int i = 0; i < palabra.size(); i++){
        switch (pPalabra -> at(i))
        {
        case 'a':
            vocalA++;
            break;
        case 'e':
            vocalE++;
            break;
        case 'i':
            vocalI++;
            break;
        case 'o':
            vocalO++;
            break;
        case 'u':
            vocalU++;
            break;
        }
    }

	cout << "\n\n\nLa cadena introducida: " << palabra << endl;
	cout << "\nContiene: " << endl;
    cout << "Vocales a: " << vocalA << endl;
    cout << "Vocales e: " << vocalE << endl;
    cout << "Vocales i: " << vocalI << endl;
    cout << "Vocales o: " << vocalO << endl;
    cout << "Vocales u: " << vocalU << endl;

    return 0;
}
