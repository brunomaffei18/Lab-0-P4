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
  //creadores
    Investigador(string nombre,  string orcid ,string institucion);
  //destructor
    ~Investigador();
  //getters
    string getORCID();
    string getInstitucion();
    string getNombre();
    string toString();
    map<string,Publicacion*> getMapPub();
    vector<string> listarPublicaciones(DTFecha desde, string palabra);
    //void listarPublicaciones(DTFecha fecha, std::string palabra);

  void quitarpublicacion(string DOI);

  //setters
    void agregarPublicacionAInvestigador(Publicacion* Pub);
  //Funciones
    string toString();
};



#endif