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
  map<Publicacion*, string>misPub;
public:
  //creadores
    Investigador(string nombre,  string orcid ,string institucion);
  //destructor
    ~Investigador();
  //getters
    string getORCID();
<<<<<<< HEAD
    string getInstitucion();
    string getNombre();
=======
    string getNombe();
>>>>>>> Publicacion
    string toString();

    vector<string> listaPublicaciones(DTFecha desde, string palabra);
    //void listarPublicaciones(DTFecha fecha, std::string palabra);
  //setters
    void setMapPub();
  //Funciones
    string toString();
};



#endif