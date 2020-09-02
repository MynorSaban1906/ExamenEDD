#include "cabecera.h"

Cabecera::Cabecera(string nombre)
{
    this->nombre=nombre;
}

void Cabecera::setNombre(string n){
    this->nombre=n;
}

string Cabecera::getNombre(){return this->nombre;}
