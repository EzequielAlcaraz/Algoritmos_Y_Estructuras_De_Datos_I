#include <iostream>
#include "mammal.h"

using namespace std;

//Murcielago
Murcielago::Murcielago(){}

Murcielago::~Murcielago(){}

void Murcielago::comer(){
    cout << " ---> El murcielago esta comiendo..." << endl;
}

void Murcielago::dormir(){
    cout << " ---> El murcielago esta durmiendo..." << endl;
}

//Ballena
Ballena::Ballena(){}

Ballena::~Ballena(){}

void Ballena::comer(){
    cout << " ---> La ballena esta comiendo..." << endl;
}

void Ballena::dormir(){
    cout << " ---> La ballena esta durmiendo..." << endl;
}

//Leon Marino
LeonMarino::LeonMarino(){}

LeonMarino::~LeonMarino(){}

void LeonMarino::comer(){
    cout << " ---> El leon marino esta comiendo..." << endl;
}

void LeonMarino::dormir(){
    cout << " ---> El leon marino esta durmiedo..." << endl;
}

