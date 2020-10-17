#include <iostream>

using namespace std;

int main()
{
    const int Max = 10;
    typedef double Arreglo[Max];
    Arreglo arreglo = {34.2, 54.1, 67.3, 81.4};
    int contador = 0, pos;

    for(int i = 0; i < Max; i++){
        if(arreglo[i] > 0)
            contador++;
    }

    cout << "El contador es: " << contador << endl;

    cout << "\nArreglos actuales: \n" << endl;
    for(int i = 0; i < contador; i++){
        cout << "Arreglo[" << i << "] = " << arreglo[i] << endl;
    }

    cout << "\n\nIndique la posicion del arreglo que desea eliminar: ";
    cin >> pos;

    for(int i = pos; i < contador - 1; i++){
        arreglo[i] = arreglo[i + 1];
    }
    contador--;

    cout << "\n\nNueva lista de arreglos: \n" << endl;
    for(int i = 0; i < contador; i++){
        cout << "Arreglo[" << i << "] = " << arreglo[i] << endl;
    }

    return 0;
}
