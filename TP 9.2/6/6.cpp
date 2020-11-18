#include <iostream>

using namespace std;

void introducirMatriz();
void matrizTranspuesta();

int c, f;
int **pM1;

int main()
{
    introducirMatriz();
    matrizTranspuesta();

    for(int i = 0; i < f; i++)
    {
        delete[] pM1[i];
    }
    delete [] pM1;

    return 0;
}


void introducirMatriz()
{
    cout << "----Introducir matriz----\n" << endl;

    cout << "\nDeterminar la cantidad de filas: ";
    cin >> f;
    cout << "\nDeterminar la cantidad de columnas: ";
    cin >> c;

    //Reserva dinamica de matrices
    pM1 = new int *[f];
    for(int i = 0; i < f; i++){
        pM1[i] = new int [c];
    }

    //Inicializacion de matrices
    cout << "\n\nIntroducir valores de la matriz: \n" << endl;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << "Valor en [" << i << "] - [" << j << "] = ";
            cin >> pM1[i][j];                //Diferencia entre lo puesto y *(*(pM1+i)+j)
        }
    }
}

void matrizTranspuesta()
{
    cout << "\n\n----Transponer matriz----\n\n" << endl;

    cout << "Matriz introducida:  ";
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << pM1[i][j] << "  ";
        }
        cout << endl << "\t\t     ";
    }

    cout << "\n\nLa transpuesta de la matriz es: \n" << endl;
    for(int i = 0; i < c; i++){
        cout << "  ";
        for(int j = 0; j < f; j++){
            cout << *(*(pM1+j)+i) << "  ";
        }
        cout << endl;
    }
}
