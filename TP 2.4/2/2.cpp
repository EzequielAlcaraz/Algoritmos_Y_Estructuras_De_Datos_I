#include <iostream>

using namespace std;

int main()
{
    int hora = 200, horaex = 250;
    float canthora, canthoraex, pago, pagoex;

    cout << "Introducir la cantidad de horas trabajadas: ";
    cin >> canthora;

    if (canthora > 40) {
        canthoraex = canthora - 40;
        pago = 40 * hora;
        pagoex = canthoraex * horaex;
        cout << "Su salario es de " << pago + pagoex << "$ con horas extras" << endl;
    }
    else {
        pago = canthora * hora;
        cout << "Su salario es de " << pago << "$ en esta semana" << endl;
    }
    return 0;
}
