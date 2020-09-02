#include "matriz.h"

Matriz::Matriz()
{
    this->Horizontal=NULL;
    this->Vertical=NULL;

}
Matriz::~Matriz(){
    Nodo *aux,*aux2,*temp,*temp2,*extra,*extra2;
    aux=this->Vertical;
    temp=this->Horizontal;
    while (aux!=NULL) {
        extra=aux->getSur();
        aux2=aux->getEste();
        while (aux2!=NULL) {
            extra2=aux2->getEste();
            delete  aux2;
            aux2=extra2;
        }
        delete  aux;
        aux=extra;
    }
    while (temp!=NULL) {
        temp2=temp->getEste();
        delete temp;
        temp=temp2;
    }

}

Cabecera *Matriz::crearHorizontal(string nombre){
    if(this->Horizontal==NULL){
        Cabecera * nueva = new Cabecera(nombre);
        this->Horizontal=nueva;
        return nueva;
    }
    Cabecera *aux =this->Horizontal;
    if(nombre.compare(aux->getNombre())<=0){
        Cabecera *nueva = new Cabecera(nombre);
        nueva->setEste(aux);
        this->Horizontal->setOeste(nueva);
        this->Horizontal=nueva;
        return  nueva;
    }
    while (aux->getEste()!=NULL) {
        if(nombre.compare(aux->getNombre())>0 && nombre.compare(((Cabecera*)aux->getEste())->getNombre())<=0){
            Cabecera* nueva = new Cabecera(nombre);
            Cabecera *temp=(Cabecera*)aux->getEste();
            temp->setOeste(nueva);
            nueva->setEste(temp);
            aux->setEste(nueva);
            nueva->setOeste(aux);
            return nueva;
            }
        aux=(Cabecera*)aux->getEste();
    }
    Cabecera *nuevo = new Cabecera(nombre);
    aux->setEste(nuevo);
    nuevo->setOeste(aux);
    return nuevo;
}

Nodo *Matriz::ObtenerUltimoH(Cabecera *cabecera, string nombre){
    if(cabecera->getEste()==NULL){ return cabecera;}
    Nodo* aux=cabecera->getEste();
    while (aux->getEste()!=NULL) {
        if(nombre.compare(((Persona*)aux)->nombre)<=0){
            return aux;
        } aux= aux->getEste();
    }
    if(nombre.compare(((Persona*)aux)->nombre)<=0){
        return aux->getOeste();
    }
    return aux;
}

Cabecera *Matriz::getHorizontal(string nombre){
    if(this->Horizontal==NULL){
        return NULL;
    }
    Cabecera *aux=this->Horizontal;
    while (aux!=NULL) {
        if(((string)aux->getNombre()).compare(nombre)==0){
            return aux;
        }
        aux=(Cabecera*)aux->getEste();
    }
    return NULL;
}

