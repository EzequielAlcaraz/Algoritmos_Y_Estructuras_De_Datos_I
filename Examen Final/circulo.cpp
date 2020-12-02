#include "circulo.h"
#include <iostream>

Circulo::Circulo(){}

float Circulo::Perimetro(float p){
    return 2 * 3.14 * p;
}

float Circulo::Area(float a){
    return 3.14 * a * a;
}
