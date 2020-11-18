#include <iostream>

using namespace std;

const int CANT = 10;
typedef int tArray[CANT];

int main()
{
    int numero;
    int *punt;

    tArray arr = {45, 21, 4, 8, 34, 87, 24, 40, 7, 23};

    cout << "\n";
    for(int i = 0; i < CANT; i++){
        punt = &arr[i];
        if(*punt % 2 == 0){
            cout << " El valor " << *punt << " de la posicion [" << i
            << "] es par y su direccion de memoria es " << punt << endl;
        }
    }

    return 0;
}
