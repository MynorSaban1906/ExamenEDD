#include "nodo.h"

Nodo::Nodo()
{
    this->Sur=NULL;
    this->Norte=NULL;
    this->Este=NULL;
    this->Oeste=NULL;
}

Nodo *Nodo:: getSur(){return this->Sur;}
Nodo *Nodo:: getEste(){return this->Este;}
Nodo *Nodo:: getOeste(){return this->Oeste;}
Nodo *Nodo:: getNorte(){return this->Norte;}

void Nodo::setSur(Nodo *n){
    this->Sur=n;
}

void Nodo::setNorte(Nodo *n){
    this->Norte=n;
}

void Nodo::setEste(Nodo *n){
    this->Este=n;
}

void Nodo::setOeste(Nodo *n){
    this->Oeste=n;
}
