#include <iostream>
#include <string>
#include <conio.h>
#include "animales.h"

using namespace std;

void Animal::comer(){}

void Animal::dormir(){}

void Animal::setNombre(){
    //cin.ignore();
    cout << "\n\nIngrese un nombre para el animal: ";
    getline(cin, nombre);
    //cin >> nombre;
}

void Animal::getNombre(){
    cout << nombre;
}

void Animal::setCodigo(int c){
    codigo = c;                   //Probar codigo = c
    cout << "\nEl codigo del animal es: " << c << endl;
    getch();
}

void Animal::getType(){
    switch(codigo)
    {
    case 1:
        cout << "Tipo de animal: Cocodrilo" << endl;
        break;
    case 2:
        cout << "Tipo de animal: Ganso" << endl;
        break;
    case 3:
        cout << "Tipo de animal: Pelicano" << endl;
        break;
    case 4:
        cout << "Tipo de animal: Murcielago" << endl;
        break;
    case 5:
        cout << "Tipo de animal: Ballena" << endl;
        break;
    case 6:
        cout << "Tipo de animal: Leon Marino" << endl;
        break;
    }

    /*if(codigo == 1){
		cout << "Tipo de animal: Cocodrilo" << endl;
	}
	else if(codigo == 2){
        cout << "Tipo de animal: Ganso" << endl;
    }
    else if(codigo == 3){
        cout << "Tipo de animal: Pelicano" << endl;
    }
    else if(codigo == 4){
        cout << "Tipo de animal: Murcielago" << endl;
    }
    else if(codigo == 5){
        cout << "Tipo de animal: Ballena" << endl;
    }
    else if(codigo == 6){
        cout << "Tipo de animal: Leon Marino" << endl;
    }*/
}

void Animal::toBreed(){
    if((codigo >= 1) && (codigo <= 3)){
        Oviparous *pOvip;
        pOvip -> layEggs();
    }
    else if((codigo >= 4) && (codigo <= 6)){
        Mammal *pMam;
        pMam -> nurse();
    }
}

void Oviparous::layEggs(){
    cout << "El animal puso un huevo" << endl;
}

void Mammal::nurse(){
    cout << "El animal tuvo una cria" << endl;
}
