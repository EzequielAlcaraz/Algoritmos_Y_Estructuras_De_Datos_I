#include <iostream>

using namespace std;

void menu();
void mas20();
void mas15();
void mas9();
void mas0();

double salario;

int main()
{
    menu();
}

void menu()
{
    system("cls");
    cout << "Programa de incremento de salario para trabajadores\n" << endl;
    cout << "Introducir el salario: ";
    cin >> salario;

    if(salario >= 20000) {mas20();}
    else if(salario < 20000 && salario >= 15000) {mas15();}
    else if(salario < 15000 && salario >= 9000) {mas9();}
    else if(salario < 9000 && salario >= 0) {mas0();}
    else cout << "Valor no valido" << endl;

}

void mas20()
{
    double porcentaje, total;
    cout << "\n\nPara salarios mayores a 20000$ corresponde un aumento del 3%" << endl;
    porcentaje = salario * 0.03;
    total = salario + porcentaje;
    cout << "\nEl salario total es: " << total << "$" << endl;
}

void mas15()
{
    double porcentaje, total;
    cout << "\n\nPara salarios mayores a 15000$ y menores a 20000$ corresponde un aumento del 5%" << endl;
    porcentaje = salario * 0.05;
    total = salario + porcentaje;
    cout << "\nEl salario total es: " << total << "$" << endl;
}

void mas9()
{
    double porcentaje, total;
    cout << "\n\nPara salarios mayores a 9000$ y menores a 15000$ corresponde un aumento del 10%" << endl;
    porcentaje = salario * 0.1;
    total = salario + porcentaje;
    cout << "\nEl salario total es: " << total << "$" << endl;
}

void mas0()
{
    double porcentaje, total;
    cout << "\n\nPara salarios mayores a 0$ y menores a 9000$ corresponde un aumento del 20%" << endl;
    porcentaje = salario * 0.2;
    total = salario + porcentaje;
    cout << "\nEl salario total es: " << total << "$" << endl;
}
