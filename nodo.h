#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo
{
public:
    Nodo();
    void setNorte(Nodo *n);
    void setSur(Nodo *n);
    void setEste(Nodo *n);
    void setOeste(Nodo *n);
    Nodo *getNorte();
    Nodo *getSur();
    Nodo *getEste();
    Nodo *getOeste();


private:
    Nodo *Norte;
    Nodo *Sur;
    Nodo *Este;
    Nodo *Oeste;
};
#endif // NODO_H
