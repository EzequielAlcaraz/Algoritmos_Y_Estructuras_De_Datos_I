#include <iostream>
#include <conio.h>
#include "funciones.h"

int op, con = 0;
const int MAX = 5;
Animal *pAnimal[MAX];

void menu()
{
    do{
        system("cls");

        cout << "----Zoo Park----\n\n" << endl;
        cout << " 1.\tTraer animal al zoologico" << endl;
        cout << " 2.\tAlimentar animales" << endl;
        cout << " 3.\tDormir animales" << endl;
        cout << " 4.\tReproducir animales" << endl;
        cout << " 5.\tSalir" << endl;
        cout << "\nOpcion: ";
        cin >> op;
        cin.ignore();
    } while(op < 1 || op > 5);

    switch(op)
    {
    case 1:
        insertarAnimal();
        break;
    case 2:
        alimentarAnimal();
        break;
    case 3:
        dormirAnimal();
        break;
    case 4:
        reproducirAnimal();
        break;
    case 5:
        system("cls");
        cout << "----Cerrando programa----\n" << endl << endl;;
        break;
    }
}

void insertarAnimal()
{
    if(con < MAX){
        do{
            system("cls");

            cout << "----Elegir el animal----\n\n" << endl;
            cout << " 1.\tCocodrilo" << endl;
            cout << " 2.\tGanso" << endl;
            cout << " 3.\tPelicano" << endl;
            cout << " 4.\tMurcielago" << endl;
            cout << " 5.\tBallena" << endl;
            cout << " 6.\tLeon Marino" << endl;
            cout << "\nOpcion: ";
            cin >> op;
            cin.ignore();
        } while(op < 1 || op > 6);

        switch(op)
        {
        case 1:
            pAnimal[con] = new Cocodrilo();
            pAnimal[con]->setNombre();
            pAnimal[con]->setCodigo(op);
            con++;
            menu();
            break;
        case 2:
            pAnimal[con] = new Ganso();
            pAnimal[con]->setNombre();
            pAnimal[con]->setCodigo(op);
            con++;
            menu();
            break;
        case 3:
            pAnimal[con] = new Pelicano();
            pAnimal[con]->setNombre();
            pAnimal[con]->setCodigo(op);
            con++;
            menu();
            break;
        case 4:
            pAnimal[con] = new Murcielago();
            pAnimal[con]->setNombre();
            pAnimal[con]->setCodigo(op);
            con++;
            menu();
            break;
        case 5:
            pAnimal[con] = new Ballena();
            pAnimal[con]->setNombre();
            pAnimal[con]->setCodigo(op);
            con++;
            menu();
            break;
        case 6:
            pAnimal[con] = new LeonMarino();
            pAnimal[con]->setNombre();
            pAnimal[con]->setCodigo(op);
            con++;
            menu();
            break;
        }
    }
    else{
        system("cls");
        cout << "---> Ya no hay mas espacio para mas animales" << endl;
        cout << "\n\n\n\n\nPrecione cualquier tecla para volver al menu" << endl;
        getch();
        menu();
    }
}

void alimentarAnimal()
{
    system("cls");

    cout << "----Alimentando animales----\n\n" << endl;

    for(int i = 0; i < con; i++){
        cout << "\n - El animal es el numero: " << i << endl;
        pAnimal[i]->getType();
        cout << " - El nobre del animal es: ";
        pAnimal[i]->getNombre();
        cout << endl;
        pAnimal[i]->comer();
        cout << endl;
    }

    cout << "\n\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    menu();
}

void dormirAnimal()
{
    system("cls");

    cout << "----Animales durmiendo----\n\n" << endl;

    for(int i = 0; i < con; i++){
        cout << "\n - El animal es el numero: " << i << endl;
        pAnimal[i]->getType();
        cout << " - El nobre del animal es: ";
        pAnimal[i]->getNombre();
        cout << endl;
        pAnimal[i]->dormir();
        cout << endl;
    }

    cout << "\n\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    menu();
}

void reproducirAnimal()
{
    system("cls");

    cout << "----Animales reproduciendo----\n\n" << endl;

    for(int i = 0; i < con; i++){
        pAnimal[i]->getType();
        cout << " - ";
        pAnimal[i]->getNombre();
        cout << " ";
        pAnimal[i]->toBreed();
        cout << endl << endl;
    }

    cout << "\n\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    menu();
}

