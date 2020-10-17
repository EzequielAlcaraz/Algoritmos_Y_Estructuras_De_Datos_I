#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

typedef struct
{
    string nombre;
    string apellido;
    int edad;
    int dni;
    double nota;
} tAlumno;

const int MAX = 50;
typedef tAlumno tArray[MAX];

typedef struct
{
    tArray alumno;
    int contador;
} tLista;

tLista lista;

void cargarLista();
void anadirAlumno();
void eliminarAlumno();
void calificarEst();
void listaNotas();
void guardarLista();

int main()
{
    system("cls");

    cargarLista();
    int opcion;

    do{
        cout << "----Lista de los estudiantes de A y ED I----" << endl;
        cout << "\n\nElija la opcion deseada\n" << endl;
        cout << " 1.\tAnadir nuevo alumno" << endl;
        cout << " 2.\tEliminar un alumno existente" << endl;
        cout << " 3.\tCalificar a los estudiantes" << endl;
        cout << " 4.\tListado de notas" << endl;
        cout << " 5.\tSalir" << endl;
        cout << "\nOpcion: ";
        cin >> opcion;
    }while(opcion < 1 || opcion > 5);

    switch(opcion)
    {
    case 1:
        anadirAlumno();
        break;
    case 2:
        eliminarAlumno();
        break;
    case 3:
        calificarEst();
        break;
    case 4:
        listaNotas();
        break;
    case 5:
        break;
    }

    return 0;
}

void cargarLista()
{
    //Cargar datos del archivo en la lista (array)
    lista.contador = 0;
    ifstream cargarLis;
    cargarLis.open("AyEDI.txt", ios::in);

    if(cargarLis.is_open()){

        while(!cargarLis.eof()){
            cargarLis >> lista.alumno[lista.contador].nombre;
            cargarLis >> lista.alumno[lista.contador].apellido;
            cargarLis >> lista.alumno[lista.contador].edad;
            cargarLis >> lista.alumno[lista.contador].dni;
            cargarLis >> lista.alumno[lista.contador].nota;

            if((!lista.alumno[lista.contador].nombre.empty()) && (!lista.alumno[lista.contador].apellido.empty())){
                    lista.contador++;
            }
        }
    }
    else{
        system("cls");
        cout << "El archivo no ha sido encontrado" << endl;
        getch();
        main();
    }
}

void anadirAlumno()
{
    //Guardar datos en la lista
    system("cls");
    int i;
    i = lista.contador;

    if(lista.contador < MAX){
        cout << "----Anadir un nuevo alumno----\n\n" << endl;
        cout << "Alumno " << i << endl;
        cout << "\nIntroducir nombre: ";
        cin >> lista.alumno[i].nombre;
        cout << "\nIntroducir apellido: ";
        cin >> lista.alumno[i].apellido;
        cout << "\nIntroducir edad: ";
        cin >> lista.alumno[i].edad;
        cout << "\nIntroducir DNI: ";
        cin >> lista.alumno[i].dni;
        lista.alumno[i].nota = 0;
    }

    //Pasar los datos desde la lista al archivo
    ofstream anadirAlu;
    anadirAlu.open("AyEDI.txt", ios::app);

    if(anadirAlu.is_open()){
        anadirAlu << lista.alumno[i].nombre << " "
            << lista.alumno[i].apellido << " " << lista.alumno[i].edad << " "
            << lista.alumno[i].dni << " " << lista.alumno[i].nota << endl;
    }
    else{
        system("cls");
        cout << "El archivo no ha sido encontrado" << endl;
        getch();
        main();
    }

    anadirAlu.close();
    cout << "\n\n\n---> Los datos se cargaron exitosamente" << endl;
    cout << "\nPresione cualquier tecla para volver al menu" << endl;
    getch();
    lista.contador++;
    main();
}

void eliminarAlumno()
{
    system("cls");

    //Mostrar lista de estudiantes
    cout << "----Lista completa de Estudiantes---\n\n" << endl;

    for(int i = 0; i < lista.contador; i++){
        cout << " " << i << ".  " << lista.alumno[i].nombre
            << " " << lista.alumno[i].apellido << " " << lista.alumno[i].dni << endl;
    }

    cout << "\nContador = " << lista.contador << endl;

    //Eliminar estudiante
    int pos;

    cout << "\n\nIndicar posicion del alumno a eliminar" << endl;
    cout << "\nNumero: ";
    cin >> pos;

    for(int i = pos; i < lista.contador; i++){
        lista.alumno[i] = lista.alumno[i + 1];
    }
    lista.contador--;

    guardarLista();
}

void calificarEst()
{
    system("cls");

    //Elegir metodo de calificacion
    cout << "----Calificar estudiantes---\n" << endl;
    int op;

    cout << "\n\nElija la opcion deseada" << endl;
    do{
        cout << "\n 1.\tCalificar a todos los estudiantes" << endl;
        cout << " 2.\tCalificar a un estudiante especifico" << endl;
        cout << "\nOpcion: ";
        cin >> op;
    } while(op < 1 || op > 2);

    //Calificar alumnos
    switch(op)
    {
    case 1:
        system("cls");
        cout << "----Calificar estudiantes---\n" << endl;

        for(int i = 0; i < lista.contador; i++){
            cout << "\n\n" << lista.alumno[i].nombre << " "
                << lista.alumno[i].apellido << "\t\tDNI: " << lista.alumno[i].dni << endl;
            cout << "\nIntroducir nota: ";
            cin >> lista.alumno[i].nota;
        }
        break;
    case 2:
        system("cls");
        int alu;

        cout << "----Calificar estudiantes---\n" << endl;
        cout << "Lista de Estudiantes\n" << endl;
        for(int i = 0; i < lista.contador; i++){
            cout << " " << i << ".  " << lista.alumno[i].nombre
                << " " << lista.alumno[i].apellido << " ---> " << lista.alumno[i].nota << endl;
        }

        cout << "\n\nIndicar posicion del alumno a calificar" << endl;
        cout << "\nNumero: ";
        cin >> alu;

        cout << "\n\n" << lista.alumno[alu].nombre << " "
            << lista.alumno[alu].apellido << "\t\tDNI: " << lista.alumno[alu].dni << endl;
        cout << "\nIntroducir nota: ";
        cin >> lista.alumno[alu].nota;
        break;
    }

    //Guardar datos en el archivo
    guardarLista();
    main();
}

void listaNotas()
{
    system("cls");

    //Mostrar lista de alumnos con notas
    cout << "----Listado de notas----\n\n" << endl;

    cout << "Lista de Estudiantes\n" << endl;
    for(int i = 0; i < lista.contador; i++){
        cout << " " << i << ".  " << lista.alumno[i].nombre
            << " " << lista.alumno[i].apellido << " ---> " << lista.alumno[i].nota << endl;
    }

    //Nota mas alta y promedio
    int est;
    double nma, suma = 0, prom;

    for(int i = 0; i < lista.contador; i++){

        if(nma < lista.alumno[i].nota){
            nma = lista.alumno[i].nota;
            est = i;
        }
        suma += lista.alumno[i].nota;
    }

    prom = suma / lista.contador;

    cout << "\n\nEl alumno con la nota mas alta es: " << lista.alumno[est].nombre
        << " " << lista.alumno[est].apellido;
    cout << "\tNota: " << lista.alumno[est].nota;

    cout << "\n\nEl promedio del curso es: " << prom;

    getch();
    main();
}

void guardarLista()
{
    //Transferir informacion al archivo
    ofstream guardarLis;
    guardarLis.open("AyEDI.txt", ios::trunc);

    if(guardarLis.is_open()){
        for(int i = 0; i < lista.contador; i++){
            guardarLis << lista.alumno[i].nombre << " "
                << lista.alumno[i].apellido << " " << lista.alumno[i].edad << " "
                << lista.alumno[i].dni << " " << lista.alumno[i].nota << endl;
        }
    }
    else{
        system("cls");
        cout << "El archivo no ha sido encontrado" << endl;
        getch();
        main();
    }

    system("cls");
    guardarLis.close();
    cout << "---> La informacion se ha guardado exitosamente" << endl;
    getch();
    main();
}
