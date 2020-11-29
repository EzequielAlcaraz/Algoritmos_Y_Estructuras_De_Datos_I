#include "alumno.h"
#include <iostream>

using namespace std;

//Definicion del constructor
Alumno :: Alumno(){}

void Alumno :: SetCedula(string ced){
    cedula = ced;
}

string Alumno :: GetCedula(){
    return cedula;
}

void Alumno :: SetNombre(string nom){
    nombre = nom;
}

string Alumno :: GetNombre(){
    return nombre;
}

void Alumno :: SetNota1(float n1){
    nota1 = n1;
}

float Alumno :: GetNota1(){
    return nota1;
}

void Alumno :: SetNota2(float n2){
    nota2 = n2;
}

float Alumno :: GetNota2(){
    return nota2;
}

void Alumno :: SetNota3(float n3){
    nota3 = n3;
}

float Alumno :: GetNota3(){
    return nota3;
}

float Alumno :: NotaFinal(){
    float nfinal;
    nfinal = (nota1 + nota2 + nota3) / 3;
    return nfinal;
}

string Alumno :: AproRepro(){
    float nfinal;
    nfinal = (nota1 + nota2 + nota3) / 3;

    if(nfinal >= 48.0)
        return "APROBADO";
    else
        return "DESAPROBADO";
}

