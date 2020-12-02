#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"

class Moto : public Vehiculo
{
    private:
        int cilindrada;
    public:
        Moto();
        ~Moto();
};

#endif // MOTO_H
