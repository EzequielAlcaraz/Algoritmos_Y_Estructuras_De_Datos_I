#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, promedio;

    cout << "Introduzca las 3 notas del alumno: " << endl;
    cout << "Nota 1: "; cin >> nota1;
    cout << "Nota 2: "; cin >> nota2;
    cout << "Nota 3: "; cin >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 7){
        cout << "El alumno esta aprobado con una nota promedio de: " << promedio << endl;
    }
    else {
        cout << "El alumno esta desaprobado con una nota promedio de: " << promedio << endl;
    }
    return 0;
}
