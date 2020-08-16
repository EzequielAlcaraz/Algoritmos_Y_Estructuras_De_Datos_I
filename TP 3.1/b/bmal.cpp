#include <iostream>
#include <fstream>

using namespace std;

typedef enum{primera, bussiness, economica}tClase;

string cadClase(tClase clase);

int main()
{
    int clase, origen, destino;
    string nombre, apellido, dni;
    ofstream archivo;

    archivo.open("reservas.txt");

    cout << "Bienvenido\n" << endl;
    cout << "\nToma de reservas. Introduzca los datos pedidos" << endl;
    cout << "Nombre/s (1 para terminar): ";
    getline(cin,nombre);

    while (nombre != "1"){

        cout << "Apellido: ";
        cin >> apellido;

        cout << "DNI: ";
        cin >> dni;

        cout << "\nIndique en que clase quiere viajar: " << endl;
        cout << "   1. Primera Clase" << endl;
        cout << "   2. Clase Bussiness" << endl;
        cout << "   3. Clase Economica" << endl;
        cin >> clase;
        cout << "la clase es: " << cadClase(clase) << endl;

        cout << "\nIndique aeropuerto de origen: " << endl;
        cout << "   1. Bahia Blanca-BHI" << endl;
        cout << "   2. Buenos Aires Aeroparque-AEP" << endl;
        cout << "   3. Buenos Aires El Palomar-EPA" << endl;
        cout << "   4. Buenos Aires Ezeiza-EZE" << endl;
        cout << "   5. San Carlos de Bariloche-BRC" << endl;
        cout << "   6. San Fernando del Valle de Catamarca-CTC" << endl;
        cout << "   7. Comodoro Rivadavia-CRD" << endl;
        cin >> origen;

        cout << "\nIndique aeropuerto de destino: " << endl;
        cout << "   1. Bahia Blanca-BHI" << endl;
        cout << "   2. Buenos Aires Aeroparque-AEP" << endl;
        cout << "   3. Buenos Aires El Palomar-EPA" << endl;
        cout << "   4. Buenos Aires Ezeiza-EZE" << endl;
        cout << "   5. San Carlos de Bariloche-BRC" << endl;
        cout << "   6. San Fernando del Valle de Catamarca-CTC" << endl;
        cout << "   7. Comodoro Rivadavia-CRD" << endl;
        cin >> destino;

        while (origen == destino){
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
            cin >> origen;

            cout << "\nIndique aeropuerto de destino: " << endl;
            cout << "   1. Bahia Blanca-BHI" << endl;
            cout << "   2. Buenos Aires Aeroparque-AEP" << endl;
            cout << "   3. Buenos Aires El Palomar-EPA" << endl;
            cout << "   4. Buenos Aires Ezeiza-EZE" << endl;
            cout << "   5. San Carlos de Bariloche-BRC" << endl;
            cout << "   6. San Fernando del Valle de Catamarca-CTC" << endl;
            cout << "   7. Comodoro Rivadavia-CRD" << endl;
            cin >> destino;
        }

        archivo << origen << " " << destino << " " << clase << " " << dni << " " << apellido << " " << nombre << endl;
        cout << "\nSu reserva se ha guardado correctamente" << endl;

        cin.sync();
        cout << "\n\nNombre/s (1 para terminar): ";
        getline(cin,nombre);
    }
    archivo << "1";
    archivo.close();

    return 0;
}

string cadClase(tClase clase)
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

