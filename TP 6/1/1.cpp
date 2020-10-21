#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

typedef struct
{
    int id;
    double precio;
    int unidades;
} tProducto;

int contador;
const int CENTINELA = -1;
const int MAXPRODUCTOS = 50;
typedef tProducto tLista[MAXPRODUCTOS];
tLista lista;

void cargarLista();             //Cargar datos del archivo
void verProductos();            //Ver datos del archivo en el programa
void prodMax();                 //Buscar el producto de mas valor
void eliminarProd();            //Eliminar un producto desde su id
void guardarLista();            //Guardar los datos en el archivo

int main()
{
    system("cls");

    cargarLista();
    int opcion;

    do{
        cout << "----Lista de productos en el almacen----" << endl;
        cout << "\n\nElija la opcion deseada\n" << endl;
        cout << " 1.\tVer lista de productos" << endl;
        cout << " 2.\tProducto de maximo valor" << endl;
        cout << " 3.\tEliminar un producto" << endl;
        cout << " 4.\tSalir" << endl;
        cout << "\nOpcion: ";
        cin >> opcion;
    } while(opcion < 1 || opcion > 4);

    switch(opcion)
    {
    case 1:
        verProductos();
        break;
    case 2:
        prodMax();
        break;
    case 3:
        eliminarProd();
        break;
    case 4:
        break;
    }

    return 0;
}

void cargarLista()
{
    contador = 0;
    ifstream cargarLis;
    cargarLis.open("productos.txt", ios::in);

    if(cargarLis.is_open()){
        cargarLis >> lista[contador].id;

        while(lista[contador].id != CENTINELA){
            cargarLis >> lista[contador].precio;
            cargarLis >> lista[contador].unidades;
            contador++;
            cargarLis >> lista[contador].id;
        }
    }
    else{
        system("cls");
        cout << "---> El archivo no ha sido encontrado" << endl;
        getch();
        main();
    }

    cargarLis.close();
}

void verProductos()
{
    system("cls");

    cout << "----Lista de productos----\n\n" << endl;
    cout << " N°  ID\t      $       Unidades\n" << endl;
    for(int i = 0; i < contador; i++){
        cout << " " << i << ".  " << lista[i].id << " "
            << lista[i].precio << " ---> " << lista[i].unidades << endl;
    }

    cout << "\n\n\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    main();
}

void prodMax()
{
    system("cls");

    double total = 0, maximo = 0;
    int pos;

    cout << "----Producto de maximo valor en el almacen----\n\n" << endl;
    for(int i = 0; i < contador; i++){
        total = lista[i].precio * lista[i].unidades;
        if(maximo < total)
            maximo = total;
            pos = i;
    }
    cout << "El producto mas valioso cuesta: " << maximo << " $" << endl;
    cout << "\nEl producto es: ID: " << lista[pos].id << "\tPrecio: "
        << lista[pos].precio << "\tUnidades: " << lista[pos].unidades;

    cout << "\n\n\n\nPrecione cualquier tecla para volver al menu" << endl;
    getch();
    main();
}

void eliminarProd()
{
    system("cls");

    cout << "----Eliminar un producto---\n\n" << endl;

    for(int i = 0; i < contador; i++){
        cout << " " << i << ".  " << lista[i].id << " "
            << lista[i].precio << " " << lista[i].unidades << endl;
    }

    int numId;

    cout << "\n\nIndicar id del producto a eliminar" << endl;
    cout << "\nNumero: ";
    cin >> numId;

    for(int i = 0; i < contador; i++){
        if(lista[i].id == numId){
            for(i = i; i < contador; i++)
                lista[i] = lista[i + 1];
        }
        else{
            cout << "\n\nEl ID introducido no se encuentra en la lista" << endl;
            getch();
            main();
        }
    }

    guardarLista();
}


void guardarLista()
{
    ofstream guardarLis;
    guardarLis.open("productos.txt", ios::trunc);

    if(guardarLis.is_open()){
        for(int i = 0; i < contador; i++){
            guardarLis << lista[i].id << " " << lista[i].precio
                << " " << lista[i].unidades << endl;
        }
        guardarLis << CENTINELA;
    }
    else{
        system("cls");
        cout << "---> El archivo no ha sido encontrado" << endl;
        getch();
        main();
    }

    system("cls");
    guardarLis.close();
    cout << "---> La informacion se ha guardado exitosamente" << endl;
    getch();
    main();
}
