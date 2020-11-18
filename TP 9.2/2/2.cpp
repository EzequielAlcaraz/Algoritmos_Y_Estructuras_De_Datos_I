#include <iostream>

using namespace std;

const int CANT = 5;
typedef int tArray[CANT];

int main()
{
    int maximo = 9999, indice;
    int *punt, *pMaximo = &maximo;

    tArray arr = {45, 4, 21, 8, 58};

    cout << "\n";
    for(int i = 0; i < CANT; i++){
        punt = &arr[i];
        if(*punt < *pMaximo){
            *pMaximo = *punt;
            indice = i;
        }
    }
    cout << " El menor valor es " << *pMaximo << " y se encuantra en la posicion ["
        << indice << "]" << endl;

    return 0;
}
