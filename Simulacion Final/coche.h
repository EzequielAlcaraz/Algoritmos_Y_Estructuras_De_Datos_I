#ifndef COCHE_H
#define COCHE_H

#include "vehiculo.h"

class Coche : public Vehiculo
{
    private:
        int motor;
    public:
        Coche();
        ~Coche();
};

#endif // COCHE_H
