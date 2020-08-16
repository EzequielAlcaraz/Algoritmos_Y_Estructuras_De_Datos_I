#include <iostream>
using namespace std;

//typedef utilizado en los procedimientos nombremozo y datomozo
typedef enum{esteban = 1, camilo, mariela, josefina, eric}tMozo;
tMozo mozo;
int m = int(mozo);

//typedef utilizado en la funcion datodia
typedef enum{lun, mar, mier, jue, vie}tDias;
tDias dia = lun;

//typedef utilizado en la funcion datomes
typedef enum{ene, feb, marz, abr, may, jun, jul, ago, sep, octu, nov, dic}tMeses;
tMeses mes = jul;

//typedef utilizado en los procedimientos pripla y datopripla
typedef enum{pdp = 1, emp, sdm, entnin}tEntrada;
tEntrada entrada;
int e = int(entrada);

//typedef utilizado en los procedimientos prinpla y datoprinpla
typedef enum{mcf = 1, cdccer, pdpcedlyt, loc, tcp, prinin}tPlaPrincipal;
tPlaPrincipal platoPrincipal;
int pp = int(platoPrincipal);

//typedef utilizado en los procedimientos postpla y datopostpla
typedef enum{acl = 1, tdc, hel, posnin}tPostre;
tPostre postre;
int p = int(postre);

//Prototipo de procedimientos de introduccion de datos
void nombremozo();
void pripla();
void prinpla();
void postpla();

//Prototipo de procedimientos y funciones para mostrar datos
void datomozo();
string datodia(tDias dia);
string datomes(tMeses mes);
void datopripla();
void datoprinpla();
void datopostpla();

int main()
{
    int mesa;

    cout << "Bienvenido\n" << endl;

    cout << "Numero de mesa: ";
    cin >> mesa;

    nombremozo();

    cout << "\n\nPor favor elija el plato que desee: \n" << endl;

    pripla();
    prinpla();
    postpla();

    cout << "\n\nLos datos del pedido son: " << endl;
    cout << "\nPara la mesa numero " << mesa << endl;
    cout << "Nombre del mozo: ";
    datomozo();
    cout << "La fecha del dia es: " << datodia(dia) << " 6 de " << datomes(mes) << " del 2020" << endl;

    cout << "Primer plato: ";
    datopripla();
    cout << "Plato Principal: ";
    datoprinpla();
    cout << "Postre: ";
    datopostpla();

    return 0;
}

//Procedimientos de introduccion de datos
void nombremozo()
{
    cout << "\nNombre del Mozo: " << endl;
    cout << "   1. Esteban" << endl;
    cout << "   2. Camilo" << endl;
    cout << "   3. Mariela" << endl;
    cout << "   4. Josefina" << endl;
    cout << "   5. Eric" << endl;
    cin >> m;

    if (m > 5){
        cout << "Esa opcion no es valida\n" << endl;
        nombremozo();
    }
}

void pripla()
{
    cout << "\nPrimer Plato (Entrada)" << endl;
    cout << "   1. Patitas de pollo" << endl;
    cout << "   2. Empanaditas" << endl;
    cout << "   3. Sandwich de miga" << endl;
    cout << "   4. Ninguno" << endl;
    cin >> e;

    if (e > 4){
        cout << "Esa opcion no es valida\n" << endl;
        pripla();
    }
}

void prinpla()
{
    cout << "\nPlato Principal" << endl;
    cout << "   1. Milanesa con fritas" << endl;
    cout << "   2. Chuletas de cerdo con ensalada rusa" << endl;
    cout << "   3. Pechuga de pollo con ensalada de lechuga y tomate" << endl;
    cout << "   4. Locro" << endl;
    cout << "   5. Tallarines con pollo" << endl;
    cout << "   6. Ninguno" << endl;
    cin >> pp;

    if (pp > 6){
        cout << "Esa opcion no es valida\n" << endl;
        prinpla();
    }
}

void postpla()
{
    int post;
    cout << "\nPostre" << endl;
    cout << "   1. Arroz con leche" << endl;
    cout << "   2. Torta de chocolate" << endl;
    cout << "   3. Helado" << endl;
    cout << "   4. Ninguno" << endl;
    cin >> p;

    if (p > 4){
        cout << "Esa opcion no es valida\n" << endl;
        postpla();
    }
}

//Procedimientos y funciones para mostrar datos
void datomozo()
{
    if (m == 1)
        cout << "Esteban" << endl;
    if (m == 2)
        cout << "Camilo" << endl;
    if (m == 3)
        cout << "Mariela" << endl;
    if (m == 4)
        cout << "Josefina" << endl;
    if (m == 5)
        cout << "Eric" << endl;
}

string datodia(tDias dia)
{
    string cad;
    if (dia == lun)
        cad = "Lunes";
    if (dia == mar)
        cad = "Martes";
    if (dia == mier)
        cad = "Miercoles";
    if (dia == jue)
        cad = "Jueves";
    if (dia == vie)
        cad = "Viernes";

    return cad;
}

string datomes(tMeses mes)
{
    string cad;
    if (mes == ene)
        cad = "Enero";
    if (mes == feb)
        cad = "Febrero";
    if (mes == marz)
        cad = "Marzo";
    if (mes == abr)
        cad = "Abril";
    if (mes == may)
        cad = "Mayo";
    if (mes == jun)
        cad = "Junio";
    if (mes == jul)
        cad = "Julio";
    if (mes == ago)
        cad = "Agosto";
    if (mes == sep)
        cad = "Septiembre";
    if (mes == octu)
        cad = "Octubre";
    if (mes == nov)
        cad = "Noviembre";
    if (mes == dic)
        cad = "Diciembre";

    return cad;
}

void datopripla()
{
    if (e == 1)
        cout << "Patitas de Pollo" << endl;
    if (e == 2)
        cout << "Empanaditas" << endl;
    if (e == 3)
        cout << "Sandwich de miga" << endl;
    if (e == 4)
        cout << "Ninguno" << endl;
}

void datoprinpla()
{
    if (pp == 1)
        cout << "Milanesa con Fritas" << endl;
    if (pp == 2)
        cout << "Chuletas de cerdo con ensalada rusa" << endl;
    if (pp == 3)
        cout << "Pechuga de pollo con ensalada de lechuga y tomate" << endl;
    if (pp == 4)
        cout << "Locro" << endl;
    if (pp == 5)
        cout << "Tallarines con pollo" << endl;
    if (pp == 6)
        cout << "Ninguno" << endl;
}

void datopostpla()
{
    if (p == 1)
        cout << "Arroz con leche" << endl;
    if (p == 2)
        cout << "Torta de chocolate" << endl;
    if (p == 3)
        cout << "Helado" << endl;
    if (p == 4)
        cout << "Ninguno" << endl;
}
