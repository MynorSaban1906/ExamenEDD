#ifndef CABECERA_H
#define CABECERA_H

#include <iostream>
#include <string>
#include "nodo.h"

using namespace std;

class Cabecera:public Nodo
{
public:
    Cabecera(string nombre);
    void setNombre(string n);
    string getNombre();
private:
    string nombre;
};

#endif // CABECERA_H
