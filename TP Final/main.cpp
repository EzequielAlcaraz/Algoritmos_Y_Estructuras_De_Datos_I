#include <iostream>
#include <conio.h>
#include "animales.h"
#include "oviparous.h"
#include "mammal.h"

using namespace std;

int con = 0;

int main()
{
    int op;
    const int MAX = 2;
    Animal *pAnimal[MAX];

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
        if(con < 2){
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
                main();
                break;
            case 2:
                pAnimal[con] = new Ganso();
                pAnimal[con]->setNombre();
                pAnimal[con]->setCodigo(op);
                con++;
                main();
                break;
            case 3:
                pAnimal[con] = new Pelicano();
                pAnimal[con]->setNombre();
                pAnimal[con]->setCodigo(op);
                con++;
                main();
                break;
            case 4:
                pAnimal[con] = new Murcielago();
                pAnimal[con]->setNombre();
                pAnimal[con]->setCodigo(op);
                con++;
                main();
                break;
            case 5:
                pAnimal[con] = new Ballena();
                pAnimal[con]->setNombre();
                pAnimal[con]->setCodigo(op);
                con++;
                main();
                break;
            case 6:
                pAnimal[con] = new LeonMarino();
                pAnimal[con]->setNombre();
                pAnimal[con]->setCodigo(op);
                con++;
                main();
                break;
            }
        }
        else{
            system("cls");
            cout << "---> Ya no hay mas espacio para mas animales" << endl;
            cout << "\n\n\n\n\nPrecione cualquier tecla para volver al menu" << endl;
            getch();
            main();
        }
        break;
    case 2:
        for(int i = 0; i < con; i++){
            cout << "\nEl animal es el numero: " << i << endl;
            pAnimal[i]->getType();
            cout << "\nEl nobre del animal es: ";
            pAnimal[i]->getNombre();
            cout << endl;
            pAnimal[i]->comer();
            cout << endl;
        }
        break;
    case 3:
        for(int i = 0; i < con; i++){
            cout << "\nEl animal es el numero: " << i << endl;
            pAnimal[i]->getType();
            cout << "\nEl nobre del animal es: ";
            pAnimal[i]->getNombre();
            cout << endl;
            pAnimal[i]->dormir();
            cout << endl;
        }
        break;
    case 4:
        for(int i = 0; i < con; i++){
            pAnimal[i]->getNombre();
            cout << " ";
            pAnimal[i]->toBreed();
        }
        break;
    case 5:
        system("cls");
        cout << "----Cerrando programa----" << endl;
        break;
    }

    /*for(int i=0; i < MAX; i++){
		delete pArray;
	}*/

    return 0;
}
