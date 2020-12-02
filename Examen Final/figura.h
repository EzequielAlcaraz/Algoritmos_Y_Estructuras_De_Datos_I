#ifndef FIGURA_H
#define FIGURA_H

class Figura
{
    private:
        float x;
    public:
        Figura();
        virtual float Perimetro(float p)=0;
        virtual float Area(float a)=0;
};

#endif // FIGURA_H
