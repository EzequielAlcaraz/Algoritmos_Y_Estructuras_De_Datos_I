#include <iostream>

using namespace std;

const int CANT = 10;
typedef int tArray[CANT];

int main()
{
    int posicion, aux;
    int *punt = new int[CANT];

    cout << "----Completar el array con 10 valores----\n" << endl;
    for(int i = 0; i < CANT; i++){
        cout << "Array [" << i << "]" << " = ";
        cin >> punt[i];
    }

    for(int i = 1; i < CANT; i++){
		posicion = i;
		while ((posicion > 0) && (punt[posicion - 1] > punt[posicion])){
            aux = punt[posicion];
            punt[posicion] = punt[posicion - 1];
            punt[posicion - 1] = aux;
            posicion--;
		}
	}

	cout << "\n\n\n----Valores del array en orden ascendente----\n" << endl;
    for(int i = 0; i < CANT; i++){
        cout << " " << i << ".  " << punt[i] << endl;
    }

    delete [] punt;

    return 0;
}
