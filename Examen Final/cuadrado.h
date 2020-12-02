#ifndef CUADRADO_H
#define CUADRADO_H

#include "figura.h"

class Cuadrado : public Figura
{
    public:
        Cuadrado();
        float Perimetro(float p);
        float Area(float a);
};

#endif // CUADRADO_H
