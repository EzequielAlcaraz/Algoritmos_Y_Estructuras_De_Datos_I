#include "persona.h"
#include <iostream>

using namespace std;

//Definicion del Costructor
Persona :: Persona(){}

void Persona :: SetNombre(string name){
    nombre = name;
}

string Persona :: GetNombre(){
    return nombre;
}

void Persona :: SetDia(int d){
    dia = d;
}

int Persona :: GetDia(){
    return dia;
}

void Persona :: SetMes(int m){
    mes = m;
}

int Persona :: GetMes(){
    return mes;
}

void Persona :: SetAnno(int a){
    anno = a;
}

int Persona :: GetAnno(){
    return anno;
}

int Persona :: obtenerEdad(){
    if(mesact > mes){
        return annoact - anno;
    }
    else if(mesact == mes){
        if(diaact >= dia){
            return annoact - anno;
        }
        else{
            return (annoact - anno) - 1;
        }
    }
    else{
        return (annoact - anno) - 1;
    }


}

void Persona :: SetDiaact(int da){
    diaact = da;
}

int Persona :: GetDiaact(){
    return diaact;
}

void Persona :: SetMesact(int ma){
    mesact = ma;
}

int Persona :: GetMesact(){
    return mesact;
}

void Persona :: SetAnnoact(int aa){
    annoact = aa;
}

int Persona :: GetAnnoact(){
    return annoact;
}
