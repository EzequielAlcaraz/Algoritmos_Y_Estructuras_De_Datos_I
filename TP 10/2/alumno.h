#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
using namespace std;

class Alumno
{
    private:
        string cedula;
        string nombre;
        float nota1;
        float nota2;
        float nota3;

    public:
        Alumno ();      //Constructor
        void SetCedula(string ced);
        string GetCedula();
        void SetNombre(string nom);
        string GetNombre();
        void SetNota1(float n1);
        float GetNota1();
        void SetNota2(float n2);
        float GetNota2();
        void SetNota3(float n3);
        float GetNota3();
        float NotaFinal();
        string AproRepro();

};

#endif // ALUMNO_H
