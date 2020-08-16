#include <iostream>
using namespace std;
#include <fstream>

enum platos{primerPlato, platoPrincipal, postre};

int main()
{
    int mozo, dia, mes, entrada, principal, post;
    string mesa;
    char aux;
    ofstream archivo;

    archivo.open("pedidos.txt");

    cout << "Bienvenido\n" << endl;

    cout << "Numero de mesa (X para teminar): ";
    cin >> mesa;

    while(mesa != "X"){
            cin.get(aux);

            cout << "\nNombre del Mozo: " << endl;
            cout << "   1. Esteban" << endl;
            cout << "   2. Camilo" << endl;
            cout << "   3. Mariela" << endl;
            cout << "   4. Josefina" << endl;
            cout << "   5. Eric" << endl;
            cin >> mozo;

            cout << "\nPor favor elija el plato que desee: " << endl;
            cout << "Primer Plato (Entrada)" << endl;
            cout << "   1. Patitas de pollo" << endl;
            cout << "   2. Empanaditas" << endl;
            cout << "   3. Sandwich de miga" << endl;
            cout << "   4. Ninguno" << endl;
            cin >> entrada;
            cout << "Plato Principal" << endl;
            cout << "   1. Milanesa con fritas" << endl;
            cout << "   2. Chuletas de cerdo con ensalada rusa" << endl;
            cout << "   3. Pechuga de pollo con ensalada de lechuga y tomate" << endl;
            cout << "   4. Locro" << endl;
            cout << "   5. Tallarines con pollo" << endl;
            cout << "   6. Ninguno" << endl;
            cin >> principal;
            cout << "Postre" << endl;
            cout << "   1. Arroz con leche" << endl;
            cout << "   2. Torta de chocolate" << endl;
            cout << "   3. Helado" << endl;
            cout << "   4. Ninguno" << endl;
            cin >> post;

            cout << "Indique la fecha: ";
            cout << "Dia: ";
            cin >> dia;
            cout << "Mes: ";
            cin >> mes;

            archivo << mesa << " " << mozo;
        }

    archivo << "X";
    archivo.close();

    return 0;
}
