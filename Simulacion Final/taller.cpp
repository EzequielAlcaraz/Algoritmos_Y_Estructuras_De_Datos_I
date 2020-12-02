#include "taller.h"

Taller :: Taller(int num){
    max_vehiculos = num;
}

Taller :: ~Taller(){}

Taller :: meter(){
    cout << "El vehiculo ha ingresado al taller" << endl;
}
