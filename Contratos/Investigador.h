#ifndef INVESTIGACION_H
#define INVESTIGACION_H


#include <map>
#include <vector>
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
  map<string,Publicacion* >misPub;
public:
  //Creador y Destructor
    Investigador(string nombre,  string orcid ,string institucion);
    ~Investigador();
  //Geters
    string getORCID();
    string getInstitucion();
    string getNombre();
    map<string,Publicacion*> getMapPub();

  //Manejo de publicaciones.
  void agregarPublicacion(Publicacion* Pub);
  void removerPublicacion(string DOI);
  vector<string> listarPublicaciones(DTFecha desde, string palabra);
  
  //Funciones
    string toString();
};



#endif