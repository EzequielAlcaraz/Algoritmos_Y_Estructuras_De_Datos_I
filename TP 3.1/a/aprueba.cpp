#include <iostream>

using namespace std;


typedef enum {esteban = 1, camilo, mariela, josefina, eric}tMozo;

int main()
{
    tMozo mozo;
    //int i = int(mozo);

    cout << "\nNombre del Mozo: " << endl;
    cout << "   1. Esteban" << endl;
    cout << "   2. Camilo" << endl;
    cout << "   3. Mariela" << endl;
    cout << "   4. Josefina" << endl;
    cout << "   5. Eric" << endl;
    cin >> mozo;

    if (i == 1){
        cout << "El nombre del mozo es Esteban" << endl;
    }
    if (i == 2){
        cout << "El nombre del mozo es Camilo" << endl;
    }
    if (i == 3){
        cout << "El nombre del mozo es Mariela" << endl;
    }
    if (i == 4){
        cout << "El nombre del mozo es Josefina" << endl;
    }
    if (i == 5){
        cout << "El nombre del mozo es Eric" << endl;
    }
    if (i > 5){
        cout << "Esta opcion no es valida" << endl;
    }

    return 0;
}

