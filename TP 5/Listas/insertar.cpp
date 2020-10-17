#include <iostream>

using namespace std;

int main()
{
    const int Max = 10;                             //Constante para el array
    typedef double Arreglo[Max];                    //Declaracion del array
    Arreglo arreglo = {34.2, 54.1, 67.3, 81.4};     //Definicion del array
    int contador = 0, pos, nuevoElemento;           //Contador, posicion del array y valor del mismo

    for(int i = 0; i < Max; i++){                   //Para i desde 0 hasta Max (10)
        if(arreglo[i] > 0){                         //Si el valor del array en i (desde 0 hasta 10) es mayor a 0
            contador++;                             //sumar 1 al contador
        }
    }
    cout << "El contador es: " << contador;         //Mostrar contador (arrays mayores a 0) es 4


    cout << "\n\nArreglos actuales: \n" << endl;    //Mostrar arreays actuales
    for(int i = 0; i < contador; i++){              //Para i desde 0 hasta contador (4)
        cout << "Arreglo[" << i << "] = " << arreglo[i] << endl;    //Mostrar el array y su valor
    }

    cout << "\n\nIndique la posicion en la que desea agregar un arreglo: ";     //Mostrar posicion del nuevo array
    cin >> pos;                                     //Indicar posicion del nuevo array
    cout << "\nValor del arreglo: ";                //Mostrar valor del nuevo array
    cin >> nuevoElemento;                           //Indicar valor del nuevo array

    if(contador < Max){                             //Si el contador es menor a Max (10)
        for(int i = contador; i > pos; i--){        //Para i desde contador (4) hasta posicion del nuevo array (menor que 4)
            arreglo[i] = arreglo[i-1];              //el valor del array en la posicion i pasa a ser el de i - 1
        }
        arreglo[pos] = nuevoElemento;               //Al array en la nueva posicion se le asigna el nuevo valor
        contador++;                                 //Al contador se le suma 1
    }
    else{                                           //Caso contrario
        cout << "Array completo" << endl;           //Mostrar que se completo el array
    }

    cout << "\n\nNueva lista de arreglos: " << endl;        //Mostrar nueva lista de arrays
    for(int i = 0; i < contador; i++){                      //Para i desde 0 hasta contador (ahora 5)
        cout << "Arreglo[" << i << "] = " << arreglo[i] << endl;    //Mostrar el array y su valor
    }

    return 0;
}
