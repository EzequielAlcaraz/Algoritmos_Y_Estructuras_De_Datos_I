#include <iostream>

using namespace std;

int main()
{
    typedef struct{
        int dni = 34894336;
        long long int cuil = 27348943365;
        long long int nTramite = 972783487457612;
    } tIdentificacion;

    typedef struct{
        string nombre = "Juan";
        string apellido = "Perez";
        int edad = 26;
        tIdentificacion identificacion;
    } tPersona;

    tPersona persona;

    cout << "Nombre: " << persona.nombre << endl;
    cout << "Apellido: " << persona.apellido << endl;
    cout << "Edad: " << persona.edad << endl;
    cout << "DNI: " << persona.identificacion.dni << endl;
    cout << "Cuil: " << persona.identificacion.cuil << endl;
    cout << "Numero de Tramite: " << persona.identificacion.nTramite << endl;

    return 0;
}
