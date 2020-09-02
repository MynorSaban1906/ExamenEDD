
#include "cabecera.h"
#include "nodo.h"
#include "persona.h"

using namespace  std;

class Matriz
{
public:
    Matriz();
    ~Matriz();
    void add(Persona *nuevo);
    void codigo();
private:
    Cabecera *Horizontal;
    Cabecera *Vertical;
    Cabecera *getVertical(string nombre);
    Cabecera *getHorizontal(string nombre);
    Cabecera *crearVertical(string nombre);
    Cabecera *crearHorizontal(string nombre);

    Nodo*ObtenerUltimoV(Cabecera *cabecera,string materia);
    Nodo*ObtenerUltimoH(Cabecera *cabecera,string nombre);
};

#endif // MATRIZ_H
