#include <iostream>

using namespace std;

void introducirMatriz();
void sumarMatriz();

int c, f;
int **pM1, **pM2;

int main()
{
    introducirMatriz();
    sumarMatriz();

    for(int i = 0; i < f; i++)
    {
        delete[] pM1[i];
        delete[] pM2[i];
    }
    delete [] pM1;
    delete [] pM2;

    return 0;
}


void introducirMatriz()
{
    cout << "----Introducir matrices----\n\n" << endl;

    cout << "Las matrices deben ser de dimension equivalentes" << endl;
    cout << "\nDeterminar la cantidad de filas de las matrices: ";
    cin >> f;
    cout << "\nDeterminar la cantidad de columnas de las matrices: ";
    cin >> c;

    //Reserva dinamica de matrices
    pM1 = new int *[f];
    pM2 = new int *[f];
    for(int i = 0; i < f; i++){
        pM1[i] = new int [c];
        pM2[i] = new int [c];
    }

    //Inicializacion de matrices
    cout << "\n\nIntroducir valores de la 1er matriz: \n" << endl;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << "Valor en [" << i << "] - [" << j << "] = ";
            cin >> pM1[i][j];                //Diferencia entre lo puesto y *(*(pM1+i)+j)
        }
    }

    cout << "\n\nIntroducir valores de la 2da matriz: \n" << endl;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << "Valor en [" << i << "] - [" << j << "] = ";
            cin >> *(*(pM2+i)+j);            //Diferencia entre lo puesto y pM2[i][j]
        }
    }
}

void sumarMatriz()
{
    cout << "----Sumar matrices----\n\n" << endl;

    cout << "Matriz 1:  ";
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << pM1[i][j] << "  ";
        }
        cout << endl << "\t   ";
    }

    cout << "\nMatriz 2:  ";
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << *(*(pM2+i)+j) << "  ";
        }
        cout << endl << "\t   ";
    }

    int suma = 0;

    cout << "\n\nLa suma de estas matrices es: \n" << endl;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << " ";
            suma = pM1[i][j] + *(*(pM2+i)+j);
            cout << suma << "  ";
        }
        cout << endl << endl;
    }
}
