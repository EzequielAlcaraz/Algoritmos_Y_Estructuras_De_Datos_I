#include "figura.h"
#include <iostream>

using namespace std;

//Figura
Figura :: Figura(){}

Figura :: ~Figura(){}

void Figura :: dibujar(){
    cout << "\n\nEsta dibujando una figura" << endl;
}

void Figura :: borrar(){
    cout << "\n\nEsta borrando una figura" << endl;
}

void Figura :: rotar(){
    cout << "\n\nEsta rotando una figura" << endl;
}

void Figura :: mover(){
    cout << "\n\nEsta moviendo una figura" << endl;
}


//Circulo
Circulo :: Circulo(){}

Circulo :: ~Circulo(){}

void Circulo :: dibujar(){
    cout << "\n\nEsta dibujando un circulo" << endl;
}

void Circulo :: borrar(){
    cout << "\n\nEsta borrando un circulo" << endl;
}


//Rectangulo
Rectangulo :: Rectangulo(){}

Rectangulo :: ~Rectangulo(){}

void Rectangulo :: dibujar(){
    cout << "\n\nEsta dibujando un rectangulo" << endl;
}

void Rectangulo :: borrar(){
    cout << "\n\nEsta borrando un rectangulo" << endl;
}


//Triangulo
Triangulo :: Triangulo(){}

Triangulo :: ~Triangulo(){}

void Triangulo :: dibujar(){
    cout << "\n\nEsta dibujando un triangulo" << endl;
}

void Triangulo :: borrar(){
    cout << "\n\nEsta borrando un triangulo" << endl;
}
