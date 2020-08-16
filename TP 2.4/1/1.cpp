#include <iostream>

using namespace std;

int main()
{
    int pdp = 80, cantidad, total;
    float descuento10, descuento20, descuento30;

    cout << "Introduzca la cantidad de productos que llevara: ";
    cin >> cantidad;

    total = pdp * cantidad;
    descuento10 = total * 0.12;
    descuento20 = total * 0.25;
    descuento30 = total * 0.40;

    if (cantidad <= 10){
        cout << "Debera pagar: " << total << "$" << endl;
    }
    else {
        if (cantidad <= 20){
            cout << "Debera pagar: " << total - descuento10 << "$ con un descuento del 12% incluido" << endl;
        }
        else {
            if (cantidad <= 30) {
                cout << "Debera pagar: " << total - descuento20 << "$ con un descuento del 25% incluido" << endl;
            }
            else {
                cout << "Debera pagar: " << total - descuento30 << "$ con un descuento del 40% incluido" << endl;
            }
        }
    }
    return 0;
}
