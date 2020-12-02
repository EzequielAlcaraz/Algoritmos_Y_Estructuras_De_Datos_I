#ifndef CIRCULO_H
#define CIRCULO_H

#include "figura.h"

class Circulo : public Figura
{
    public:
        Circulo();
        float Perimetro(float p);
        float Area(float a);

};

#endif // CIRCULO_H
