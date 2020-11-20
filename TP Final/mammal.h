#ifndef MAMMAL_H
#define MAMMAL_H

#include "animales.h"

class Murcielago : public Oviparous
{
    public:
        Murcielago();
        ~Murcielago();
        void comer();
        void dormir();
};

class Ballena : public Oviparous
{
    public:
        Ballena();
        ~Ballena();
        void comer();
        void dormir();
};

class LeonMarino : public Oviparous
{
    public:
        LeonMarino();
        ~LeonMarino();
        void comer();
        void dormir();
};

#endif // MAMMAL_H
