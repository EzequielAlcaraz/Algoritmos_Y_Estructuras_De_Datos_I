#include <iostream>

using namespace std;

const int MAX = 3;
typedef struct{
    string nombre;
    int edad;
    float promedio;
} tAlumno;

typedef tAlumno tLista[MAX];

void insertarAlumno(tAlumno *alum);
void mayorPromedio(tAlumno *alumn);

int main()
{
    tLista alumno;
    tAlumno *pAlumno = alumno;
    insertarAlumno(pAlumno);
    mayorPromedio(pAlumno);

    return 0;
}

void insertarAlumno(tAlumno *alum)
{
    cout << "----Introducir los datos de los alumnos----\n" << endl;
    for(int i = 0; i < MAX; i++){
        cout << "\n\nIntroducir el nombre del alumno: ";
        cin >> (alum + i)->nombre;
        cout << "\nIntroducir la edad del alumno: ";
        cin >> (alum + i)->edad;
        cout << "\nIntroducir el promedio del alumno: ";
        cin >> (alum + i)->promedio;
    }
}

void mayorPromedio(tAlumno *alumn)
{
    float mayor = 0;
    int posicion;

    for(int i = 0; i < MAX; i++){
        if((alumn + i)->promedio > mayor){
            mayor = (alumn + i)->promedio;
            posicion = i;
        }
    }

    cout << "\n\nEl alumno con el mayor promedio es: " << endl;
    cout << " Nombre: " << (alumn + posicion)->nombre << endl;
    cout << " Edad: " << (alumn + posicion)->edad << endl;
    cout << " Promedio: " << (alumn + posicion)->promedio << endl;
    cout << " Y se encuantra en la posicion: " << posicion << endl;
}
