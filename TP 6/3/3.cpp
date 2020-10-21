#include <iostream>
#include <conio.h>

using namespace std;

typedef int tMatriz[3][3];
tMatriz matriz1 = {1, 6, 3, 1, 3, 2, 2, 4, 6};  //Estos valores son para prueba, se pueden modificar  en cualquier
tMatriz matriz2 = {7, 3, 5, 8, 2, 4, 5, 0, 1};  //momento desde la opcion "introducir matriz" en momento de ejecucion

void introducirMatriz();
void verMatriz();
void sumarMatriz();
void restarMatriz();
void multiplicarMatriz();
void tranponerMatriz();
void mostrarSilla();

int main()
{
    system("cls");
    int opcion;

    do{
        cout << "----Operaciones con matrices----\n\n" << endl;
        cout << " 1.\tIntroducir matrices" << endl;
        cout << " 2.\tVer matrices" << endl;
        cout << " 3.\tSumar matrices" << endl;
        cout << " 4.\tRestar matrices" << endl;
        cout << " 5.\tMultiplicar matrices" << endl;
        cout << " 6.\tTransponer matrices" << endl;
        cout << " 7.\tMostrar puntos de silla de matrices" << endl;
        cout << " 8.\tSalir" << endl;
        cout << "\nOpcion: ";
        cin >> opcion;
    }while(opcion < 1 || opcion > 8);

    switch(opcion)
    {
    case 1:
        introducirMatriz();
        break;
    case 2:
        verMatriz();
        break;
    case 3:
        sumarMatriz();
        break;
    case 4:
        restarMatriz();
        break;
    case 5:
        multiplicarMatriz();
        break;
    case 6:
        tranponerMatriz();
        break;
    case 7:
        mostrarSilla();
        break;
    case 8:
        break;
    }

    return 0;
}

void introducirMatriz()
{
    system("cls");

    cout << "----Introducir matrices----\n\n" << endl;
    cout << "Introducir valores de la 1er matriz: \n" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Valor en [" << i << "] , [" << j << "] = ";
            cin >> matriz1[i][j];
        }
    }

    cout << "\n\nIntroducir valores de la 2da matriz: \n" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Valor en [" << i << "] , [" << j << "] = ";
            cin >> matriz2[i][j];
        }
    }

    cout << "\n\n---> Se han guardado los valores" << endl;
    getch();
    main();
}

void verMatriz()
{
    system("cls");

    cout << "----Ver matrices----\n\n" << endl;
    cout << "Matriz 1:  ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz1[i][j] << "  ";
        }
        cout << endl << endl;
        cout << "\t   ";
    }

    cout << "\n\nMatriz 2:  ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz2[i][j] << "  ";
        }
        cout << endl << endl;
        cout << "\t   ";
    }

    cout << "\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    main();
}

void sumarMatriz()
{
    system("cls");

    cout << "----Sumar matrices----\n\n" << endl;

    cout << "Matriz 1:  ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz1[i][j] << "  ";
        }
        if(i == 0){
            cout << "\t\t\tMatriz 2:  ";
            for(int i = 0; i == 0; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[i][j] << "  ";
                }
            }
        }
        if(i == 1){
            cout << "\t     +\t\t\t   ";
            for(int i = 1; i == 1; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[i][j] << "  ";
                }
            }
        }
        if(i == 2){
            cout << "\t\t\t\t   ";
            for(int i = 2; i == 2; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[i][j] << "  ";
                }
            }
        }
        cout << endl << endl;
        cout << "\t   ";
    }

    int suma = 0;

    cout << "\n\nLa suma de estas matrices es: \n" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << " ";
            suma = matriz1[i][j] + matriz2[i][j];
            cout << suma << "  ";
        }
        cout << endl << endl;
    }

    cout << "\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    main();
}

void restarMatriz()
{
    system("cls");

    cout << "----Restar matrices----\n\n" << endl;

    cout << "Matriz 1:  ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz1[i][j] << "  ";
        }
        if(i == 0){
            cout << "\t\t\tMatriz 2:  ";
            for(int i = 0; i == 0; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[i][j] << "  ";
                }
            }
        }
        if(i == 1){
            cout << "\t     -\t\t\t   ";
            for(int i = 1; i == 1; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[i][j] << "  ";
                }
            }
        }
        if(i == 2){
            cout << "\t\t\t\t   ";
            for(int i = 2; i == 2; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[i][j] << "  ";
                }
            }
        }
        cout << endl << endl;
        cout << "\t   ";
    }

    int resta = 0;

    cout << "\n\nLa resta de estas matrices es: \n" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << " ";
            resta = matriz1[i][j] - matriz2[i][j];
            cout << resta << "  ";
        }
        cout << endl << endl;
    }

    cout << "\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    main();
}

void multiplicarMatriz()
{
    system("cls");

    cout << "----Multiplicar matrices----\n\n" << endl;

    cout << "Matriz 1:  ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz1[i][j] << "  ";
        }
        if(i == 0){
            cout << "\t\t\tMatriz 2:  ";
            for(int i = 0; i == 0; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[i][j] << "  ";
                }
            }
        }
        if(i == 1){
            cout << "\t     *\t\t\t   ";
            for(int i = 1; i == 1; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[i][j] << "  ";
                }
            }
        }
        if(i == 2){
            cout << "\t\t\t\t   ";
            for(int i = 2; i == 2; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[i][j] << "  ";
                }
            }
        }
        cout << endl << endl;
        cout << "\t   ";
    }

    tMatriz matriz3 = {0};

    cout << "\n\nLa multiplicacion de estas matrices es: \n" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int z = 0; z < 3; z++){
                cout << " ";
                matriz3[i][j] += matriz1[i][z] * matriz2[z][j];
            }
            cout << matriz3[i][j] << "  ";
        }
        cout << endl << endl;
    }

    cout << "\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    main();
}

void tranponerMatriz()
{
    system("cls");

    cout << "----Transponer matrices----\n\n" << endl;

    cout << "Matriz 1:  ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz1[i][j] << "  ";
        }
        if(i == 0){
            cout << "\t\t\tTranspuesta:  ";
            for(int i = 0; i == 0; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz1[j][i] << "  ";
                }
            }
        }
        if(i == 1){
            cout << "\t  --->\t\t\t      ";
            for(int i = 1; i == 1; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz1[j][i] << "  ";
                }
            }
        }
        if(i == 2){
            cout << "\t\t\t\t      ";
            for(int i = 2; i == 2; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz1[j][i] << "  ";
                }
            }
        }
        cout << endl << endl;
        cout << "\t   ";
    }

    cout << "\n\nMatriz 2:  ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz2[i][j] << "  ";
        }
        if(i == 0){
            cout << "\t\t\tTranspuesta:  ";
            for(int i = 0; i == 0; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[j][i] << "  ";
                }
            }
        }
        if(i == 1){
            cout << "\t  --->\t\t\t      ";
            for(int i = 1; i == 1; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[j][i] << "  ";
                }
            }
        }
        if(i == 2){
            cout << "\t\t\t\t      ";
            for(int i = 2; i == 2; i++){
                for(int j = 0; j < 3; j++){
                    cout << matriz2[j][i] << "  ";
                }
            }
        }
        cout << endl << endl;
        cout << "\t   ";
    }

    cout << "\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    main();
}

void mostrarSilla()
{
    system("cls");
    int mayor = -9999, menor = 9999, iaux = 0, kaux = 0;

    cout << "----Punto de silla de las matrices----\n\n" << endl;

    //Mostrar matriz 1
    cout << "Matriz 1:  ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz1[i][j] << "  ";
        }
        cout << endl << endl;
        cout << "\t   ";
    }

    //Calcular punto de silla de matriz 1
    for(int j = 0; j < 3; j++){
        mayor = -9999, menor = 9999;
        for(int i = 0; i < 3; i++){
            if(matriz1[i][j] > mayor){
                mayor = matriz1[i][j];
                iaux = i;
            }
        }

        for(int k = 0; k < 3; k++){
            if(matriz1[iaux][k] < menor){
                menor = matriz1[iaux][k];
                kaux = k;
            }
        }
        if(mayor == menor){
            cout << "\nEl punto de silla de la matriz 1 es: ";
            cout << "Matriz 1 [" << iaux << "][" << kaux << "]: " << matriz1[iaux][kaux] << endl;
            break;
        }
    }
    if(mayor != menor){
        cout << "La matriz 1 no tiene ningun punto de silla" << endl;
    }

    //Mostrar matriz 2
    cout << "\n\nMatriz 2:  ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz2[i][j] << "  ";
        }
        cout << endl << endl;
        cout << "\t   ";
    }

    mayor = -9999, menor = 9999, iaux = 0, kaux = 0;

    //Calcular punto de silla de matriz 2
    for(int j = 0; j < 3; j++){
        mayor = -9999, menor = 9999;
        for(int i = 0; i < 3; i++){
            if(matriz2[i][j] > mayor){
                mayor = matriz2[i][j];
                iaux = i;
            }
        }

        for(int k = 0; k < 3; k++){
            if(matriz2[iaux][k] < menor){
                menor = matriz2[iaux][k];
                kaux = k;
            }
        }
        if(mayor == menor){
            cout << "\nEl punto de silla de la matriz 2 es: ";
            cout << "Matriz 2 [" << iaux << "][" << kaux << "]: " << matriz2[iaux][kaux] << endl;
            break;
        }
    }
    if(mayor != menor){
        cout << "La matriz 1 no tiene ningun punto de silla" << endl;
    }

    cout << "\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    main();
}
