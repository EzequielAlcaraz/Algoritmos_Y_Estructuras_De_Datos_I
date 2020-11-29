#include "figura.h"
#include <iostream>
#include <conio.h>

using namespace std;

void figura();
void circulo();
void rectangulo();
void triangulo();

int op, cont;
Figura *arrayF[4];
Figura *figu1, *figu2, *figu3, *figu4;

int main()
{
    do{
        system("cls");

        cout << "----Programa de manipulacion de figuras----\n\n" << endl;
        cout << " 1.\tCrear Figura" << endl;
        cout << " 2.\tCrear Circulo" << endl;
        cout << " 3.\tCrear Rectangulo" << endl;
        cout << " 4.\tCrear Triangulo" << endl;
        cout << " 5.\tRecorrer array dibujando en cada uno (Crear 5 figuras primero)" << endl;
        cout << " 6.\tSalir" << endl;
        cout << "\nOpcion: ";
        cin >> op;
        cin.ignore();
    }while (op < 1 || op > 6);

    switch(op)
    {
    case 1:
        if(cont < 5){
            figu1 = new Figura();
            arrayF[cont] = figu1;
            cont++;
            figura();
        }
        else{
            system("cls");
            cout << "Array completo\n\n" << endl;
            cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
            getch();
            main();
        }
        break;
    case 2:
        if(cont < 5){
            figu2 = new Circulo();
            arrayF[cont] = figu2;
            cont++;
            circulo();
        }
        else{
            system("cls");
            cout << "Array completo\n\n" << endl;
            cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
            getch();
            main();
        }
        break;
    case 3:
        if(cont < 5){
            figu3 = new Rectangulo();
            arrayF[cont] = figu3;
            cont++;
            rectangulo();
        }
        else{
            system("cls");
            cout << "Array completo\n\n" << endl;
            cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
            getch();
            main();
        }
        break;
    case 4:
        if(cont < 5){
            figu4 = new Triangulo();
            arrayF[cont] = figu4;
            cont++;
            triangulo();
        }
        else{
            system("cls");
            cout << "Array completo\n\n" << endl;
            cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
            getch();
            main();
        }
        break;
    case 5:
        system("cls");
        cout << "----Dibujar en cada figura del array----\n\n" << endl;
        for(int i = 0; i < 5; i++){
            arrayF[i]->dibujar();
        }
        cout << "\n\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    case 6:
        delete figu1, figu2, figu3, figu4;
        break;
    }

    return 0;
}

void figura()
{
    do{
        system("cls");

        cout << "----Manipular figura----\n\n" << endl;
        cout << " 1.\tDibujar figura" << endl;
        cout << " 2.\tBorrar figura" << endl;
        cout << " 3.\tRotar figura" << endl;
        cout << " 4.\tMover figura" << endl;
        cout << "\nOpcion: ";
        cin >> op;
        cin.ignore();
    }while(op < 1 || op > 4);

    switch(op)
    {
    case 1:
        figu1->dibujar();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    case 2:
        figu1->borrar();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    case 3:
        figu1->rotar();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    case 4:
        figu1->mover();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    }
}

void circulo()
{
    do{
        system("cls");

        cout << "----Manipular Circulo----\n\n" << endl;
        cout << " 1.\tDibujar circulo" << endl;
        cout << " 2.\tBorrar circulo" << endl;
        cout << "\nOpcion: ";
        cin >> op;
        cin.ignore();
    }while(op < 1 || op > 2);

    switch(op)
    {
    case 1:
        figu2->dibujar();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    case 2:
        figu2->borrar();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    }
}

void rectangulo()
{
    do{
        system("cls");

        cout << "----Manipular Rectangulo----\n\n" << endl;
        cout << " 1.\tDibujar rectangulo" << endl;
        cout << " 2.\tBorrar rectangulo" << endl;
        cout << "\nOpcion: ";
        cin >> op;
        cin.ignore();
    }while(op < 1 || op > 2);

    switch(op)
    {
    case 1:
        figu3->dibujar();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    case 2:
        figu3->borrar();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    }
}

void triangulo()
{
    do{
        system("cls");

        cout << "----Manipular Triangulo----\n\n" << endl;
        cout << " 1.\tDibujar triangulo" << endl;
        cout << " 2.\tBorrar triangulo" << endl;
        cout << "\nOpcion: ";
        cin >> op;
        cin.ignore();
    }while(op < 1 || op > 2);

    switch(op)
    {
    case 1:
        figu4->dibujar();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    case 2:
        figu4->borrar();
        cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
        getch();
        main();
        break;
    }
}
