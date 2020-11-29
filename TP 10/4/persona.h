#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
    private:
        string nombre;
        int dia;
        int mes;
        int anno;
        int diaact;
        int mesact;
        int annoact;

    public:
        Persona();          //Costructor
        void SetNombre(string name);
        string GetNombre();
        void SetDia(int d);
        int GetDia();
        void SetMes(int m);
        int GetMes();
        void SetAnno(int a);
        int GetAnno();
        int obtenerEdad();
        void SetDiaact(int da);
        int GetDiaact();
        void SetMesact(int ma);
        int GetMesact();
        void SetAnnoact(int aa);
        int GetAnnoact();
};

#endif // PERSONA_H
