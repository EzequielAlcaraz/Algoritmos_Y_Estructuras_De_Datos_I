#include "rectangulo.h"
#include <iostream>

using namespace std;

//Definicion del Constructor
Rectangulo :: Rectangulo(){}

void Rectangulo :: SetAltura(float al){
    altura = al;
}

float Rectangulo :: GetAltura(){
    return altura;
}

void Rectangulo :: SetBase(float ba){
    base = ba;
}

float Rectangulo :: GetBase(){
    return base;
}

float Rectangulo :: area(){
    float areaRectangulo;
    areaRectangulo = altura * base;
    return areaRectangulo;
}

float Rectangulo :: perimetro(){
    float perimRectangulo;
    perimRectangulo = ((2 * altura) + (2 * base));
    return perimRectangulo;
}

