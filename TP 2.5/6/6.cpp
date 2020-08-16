#include <iostream>

using namespace std;

//Prototipo de funciones
void intercambio(int&, int&);

//Codigo
int main()
{
    int var1 = 10, var2 = 15;
    cout << "Intercambio de variables \n" << endl;
    cout << "La primer variable es: " << var1 << endl;
    cout << "La segunda variable es: " << var2 << endl;

    intercambio (var1, var2);
    cout << "\n Al usar la funcion para intercambiar variables quedaria: " << endl;
    cout << "Variable 1 = " << var1 << endl;
    cout << "Variable 2 = " << var2 << endl;

    return 0;
}

//Declaracion de funciones
void intercambio(int& var1, int& var2)
{
    int aux;
    aux = var1;
    var1 = var2;
    var2 = aux;
}
