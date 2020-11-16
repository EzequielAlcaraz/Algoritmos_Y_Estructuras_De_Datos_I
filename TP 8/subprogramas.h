#ifndef subprogramas_h
#define subprogramas_h

#include <iostream>
using namespace std;

typedef struct
{
    string nombre;
    string apellido;
    string carrera;
    int anio;
} tAlumno;

const int MAX = 100;
typedef tAlumno tArray[MAX];

typedef struct
{
    tArray alumno;
    int contador;
} tLista;

void menu();
void cargarLista();
void mostrarAlumnos();
void buscarAlumnos();
void insertarAlumno();
void eliminarAlumno();
void formaOrden();
void campoOrden();
void guardarLista();
bool operator > (tAlumno opIzq, tAlumno opDer);
bool operator < (tAlumno opIzq, tAlumno opDer);

#endif //subrprogramas_h
