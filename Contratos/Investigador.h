#ifndef INVESTIGACION_H
#define INVESTIGACION_H

#include <set>
#include <string>
#include "DTFecha.h"
#include "Publicacion.h"
#include <ostream>
#include <sstream>

class Investigador
{
private:
  std::string ORCID;
  std::string Nombre;
  std::string Institucion;
  
public:
    Investigador(std::string nombre,  std::string orcid ,std::string institucion);
    std::string toString();
    std::set<std::string> listaPublicaciones(DTFecha desde, std::string palabra);
};



#endif