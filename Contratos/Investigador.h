#ifndef INVESTIGACION_H
#define INVESTIGACION_H


#include <map>
#include <set>
#include <string>
#include "DTFecha.h"
#include "Publicacion.h"
#include <ostream>
#include <sstream>

using namespace std;

class Investigador
{
private:
  string ORCID;
  string Nombre;
  string Institucion;
  map<Publicacion*, string>misPub;
public:
    Investigador(string nombre,  string orcid ,string institucion);
    string toString();
    set<string> listaPublicaciones(DTFecha desde, string palabra);
};



#endif