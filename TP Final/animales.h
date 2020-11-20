#ifndef ANIMALES_H
#define ANIMALES_H

using namespace std;

class Animal
{
    public:
        virtual void comer() = 0;
        virtual void dormir() = 0;
        void setNombre();
        void getNombre();
        void setCodigo(int c);
        void getType();
        void toBreed();

    protected:
        string nombre;
        int codigo;
};

class Oviparous : public Animal
{
    public:
        void layEggs();
        virtual void comer() = 0;
        virtual void dormir() = 0;
};

class Mammal : public Animal
{
    public:
        void nurse();
        virtual void comer() = 0;
        virtual void dormir() = 0;
};

#endif // ANIMALES_H
