#ifndef OVIPAROUS_H
#define OVIPAROUS_H

#include "animales.h"

class Cocodrilo : public Oviparous
{
    public:
        Cocodrilo();
        ~Cocodrilo();
        void comer();
        void dormir();
};

class Ganso : public Oviparous
{
    public:
        Ganso();
        ~Ganso();
        void comer();
        void dormir();
};

class Pelicano : public Oviparous
{
    public:
        Pelicano();
        ~Pelicano();
        void comer();
        void dormir();
};


#endif // OVIPAROUS_H
