#ifndef FIGURA_H
#define FIGURA_H

class Figura
{
    public:
        Figura();
        ~Figura();
        virtual void dibujar();
        virtual void borrar();
        void rotar();
        void mover();
};

class Circulo : public Figura
{
    public:
        Circulo();
        ~Circulo();
        virtual void dibujar();
        virtual void borrar();
};

class Rectangulo : public Figura
{
    public:
        Rectangulo();
        ~Rectangulo();
        virtual void dibujar();
        virtual void borrar();
};

class Triangulo : public Figura
{
    public:
        Triangulo();
        ~Triangulo();
        virtual void dibujar();
        virtual void borrar();
};

#endif // FIGURA_H
