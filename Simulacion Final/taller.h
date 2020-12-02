#ifndef TALLER_H
#define TALLER_H

#include "vehiculo.h"

class Taller
{
    private:
        int max_vehiculos;
        int num_vehiculos;
        Vehiculo *vehiculo[];
    public:
        Taller(int num);
        ~Taller();
        void meter(vehiculo);
        void arreglarVehiculos();
};

#endif // TALLER_H
