#ifndef ARTICULO_H
#define ARTICULO_H

#include <iostream>

class Articulo
{
    private:
        float costoBase;

    public:
        Articulo();
        void SetCostoBase(float CB);
        float GetCostoBase();
        float PVPMayor();
        float PVPDetal();
};

Articulo :: Articulo(){}

void Articulo :: SetCostoBase(float CB){
    costoBase = CB;
}

float Articulo :: GetCostoBase(){
    return costoBase;
}

float Articulo :: PVPMayor(){
    float precio;
    precio = costoBase * 0.15;
    precio += costoBase;
    return precio;
}

float Articulo :: PVPDetal(){
    float precio;
    precio = costoBase * 0.3;
    precio += costoBase;
    return precio;
}

#endif // ARTICULO_H
