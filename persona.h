#ifndef PERSONA_H
#define PERSONA_H
#include "nodo.h"
#include <iostream>
using namespace std;

class Persona:public Nodo
{
public:
    Persona(long carnet,string nombre);

    long carnet;
    string nombre;

};

#endif // PERSONA_H
