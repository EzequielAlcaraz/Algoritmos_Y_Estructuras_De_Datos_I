#include <iostream>

using namespace std;

//typedef de clases
typedef enum{primera, bussiness, economica}tClaseAvion;
tClaseAvion claseAvion;
int clase = int (claseAvion);

//typedef de aeropuertos de origen
typedef enum{BHI = 1, AEP, EPA, EZE, BRC, CTC, CRD}tAeropuertosOrigen;
tAeropuertosOrigen aeropuertoOrigen;
int aeroOri = int (aeropuertoOrigen);

//typedef de aeropuertos de destino
typedef enum{sBHI = 1, sAEP, sEPA, sEZE, sBRC, sCTC, sCRD}tAeropuertosDestino;
tAeropuertosDestino aeropuertoDestino;
int aeroDes = int (aeropuertoDestino);

//Prototipos de procedimientos y funciones
string cadClase(tClaseAvion claseAvion);
void datoOrigen();
void datoDestino();

int main()
{
    string nombre, apellido, dni;

    cout << "Bienvenido\n" << endl;
    cout << "\nToma de reservas. Introduzca los datos pedidos" << endl;
    cout << "Nombre/s: ";
    getline(cin,nombre);

    cout << "Apellido/s: ";
    getline(cin, apellido);

    cout << "DNI: ";
    cin >> dni;

    cout << "\nIndique en que clase quiere viajar: " << endl;
    cout << "   1. Primera Clase" << endl;
    cout << "   2. Clase Bussiness" << endl;
    cout << "   3. Clase Economica" << endl;
    cin >> clase;

    cout << "\nIndique aeropuerto de origen: " << endl;
    cout << "   1. Bahia Blanca-BHI" << endl;
    cout << "   2. Buenos Aires Aeroparque-AEP" << endl;
    cout << "   3. Buenos Aires El Palomar-EPA" << endl;
    cout << "   4. Buenos Aires Ezeiza-EZE" << endl;
    cout << "   5. San Carlos de Bariloche-BRC" << endl;
    cout << "   6. San Fernando del Valle de Catamarca-CTC" << endl;
    cout << "   7. Comodoro Rivadavia-CRD" << endl;
    cin >> aeroOri;

    cout << "\nIndique aeropuerto de destino: " << endl;
    cout << "   1. Bahia Blanca-BHI" << endl;
    cout << "   2. Buenos Aires Aeroparque-AEP" << endl;
    cout << "   3. Buenos Aires El Palomar-EPA" << endl;
    cout << "   4. Buenos Aires Ezeiza-EZE" << endl;
    cout << "   5. San Carlos de Bariloche-BRC" << endl;
    cout << "   6. San Fernando del Valle de Catamarca-CTC" << endl;
    cout << "   7. Comodoro Rivadavia-CRD" << endl;
    cin >> aeroDes;

    while (aeroOri == aeroDes){
        cout << "\nNo se pueden hacer vuelos al lugar de origen" << endl;
        cout << "Por favor selecciones sus respuestas nuevamente" << endl;
        cout << "\nIndique aeropuerto de origen: " << endl;
        cout << "   1. Bahia Blanca-BHI" << endl;
        cout << "   2. Buenos Aires Aeroparque-AEP" << endl;
        cout << "   3. Buenos Aires El Palomar-EPA" << endl;
        cout << "   4. Buenos Aires Ezeiza-EZE" << endl;
        cout << "   5. San Carlos de Bariloche-BRC" << endl;
        cout << "   6. San Fernando del Valle de Catamarca-CTC" << endl;
        cout << "   7. Comodoro Rivadavia-CRD" << endl;
        cin >> aeroOri;

        cout << "\nIndique aeropuerto de destino: " << endl;
        cout << "   1. Bahia Blanca-BHI" << endl;
        cout << "   2. Buenos Aires Aeroparque-AEP" << endl;
        cout << "   3. Buenos Aires El Palomar-EPA" << endl;
        cout << "   4. Buenos Aires Ezeiza-EZE" << endl;
        cout << "   5. San Carlos de Bariloche-BRC" << endl;
        cout << "   6. San Fernando del Valle de Catamarca-CTC" << endl;
        cout << "   7. Comodoro Rivadavia-CRD" << endl;
        cin >> aeroDes;
    }

    cout << "\nSu reserva se ha guardado correctamente" << endl;

    cout << "\n\nLista de datos" << endl;
    cout << "Nombre/s: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "DNI: " << dni << endl;
    cout << "Clase: " << cadClase(claseAvion) << endl;
    cout << "Aeropuerto de origen: ";
    datoOrigen();
    cout << "Aeropuerto de destino: ";
    datoDestino();

    return 0;
}

string cadClase(tClaseAvion claseAvion)
{
    string cad;
    if (clase == 1){
        cad = "Primera";
    }
    if (clase == 2){
        cad = "Bussiness";
    }
    if (clase == 3){
        cad = "Economica";
    }
    return cad;
}

void datoOrigen()
{
    if (aeroOri == 1)
        cout << "Bahia Blanca-BHI" << endl;
    if (aeroOri == 2)
        cout << "Buenos Aires Aeroparque-AEP" << endl;
    if (aeroOri == 3)
        cout << "Buenos Aires El Palomar-EPA" << endl;
    if (aeroOri == 4)
        cout << "Buenos Aires Ezeiza-EZE" << endl;
    if (aeroOri == 5)
        cout << "San Carlos de Bariloche-BRC" << endl;
    if (aeroOri == 6)
        cout << "San Fernando del Valle de Catamarca-CTC" << endl;
    if (aeroOri == 7)
        cout << "Comodoro Rivadavia-CRD" << endl;
}

void datoDestino()
{
    if (aeroDes == 1)
        cout << "Bahia Blanca-BHI" << endl;
    if (aeroDes == 2)
        cout << "Buenos Aires Aeroparque-AEP" << endl;
    if (aeroDes == 3)
        cout << "Buenos Aires El Palomar-EPA" << endl;
    if (aeroDes == 4)
        cout << "Buenos Aires Ezeiza-EZE" << endl;
    if (aeroDes == 5)
        cout << "San Carlos de Bariloche-BRC" << endl;
    if (aeroDes == 6)
        cout << "San Fernando del Valle de Catamarca-CTC" << endl;
    if (aeroDes == 7)
        cout << "Comodoro Rivadavia-CRD" << endl;
}

