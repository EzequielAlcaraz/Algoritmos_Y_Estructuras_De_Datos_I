#include <iostream>
#include "mammal.h"

using namespace std;

//Murcielago
Murcielago::Murcielago(){}

Murcielago::~Murcielago(){}

void Murcielago::comer(){
    cout << "El cocodrilo esta comiendo..." << endl;
}

void Murcielago::dormir(){
    cout << "El cocodrilo esta durmiendo..." << endl;
}

//Ballena
Ballena::Ballena(){}

Ballena::~Ballena(){}

void Ballena::comer(){
    cout << "El ganso esta comiendo..." << endl;
}

void Ballena::dormir(){
    cout << "El ganso esta durmiendo..." << endl;
}

//Leon Marino
LeonMarino::LeonMarino(){}

LeonMarino::~LeonMarino(){}

void LeonMarino::comer(){
    cout << "El pelicano esta comiendo..." << endl;
}

void LeonMarino::dormir(){
    cout << "El pelicano esta durmiedo..." << endl;
}

