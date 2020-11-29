#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{
    private:
        float altura;
        float base;

    public:
        Rectangulo();       //Constructor
        void SetAltura(float al);
        float GetAltura();
        void SetBase(float ba);
        float GetBase();
        float area();
        float perimetro();
};

#endif // RECTANGULO_H
