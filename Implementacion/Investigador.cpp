#include "../Contratos/Investigador.h"
#include "../Contratos/Publicacion.h"
#include"../Contratos/DTFecha.h"

//Constructor
Investigador::Investigador(std::string nombre,  std::string orcid ,std::string institucion){
  this->Institucion=institucion;
  this->Nombre=nombre;
  this->ORCID=orcid;

}

//Geters

string Investigador::getInstitucion(){
  return Institucion;
}

string Investigador::getORCID(){
  return ORCID;
}

string Investigador::getNombre(){
  return Nombre;
}

//Funciones
vector<string> Investigador::listaPublicaciones(DTFecha desde,string palabra){
  vector <string> resultado;
  
  for (auto it= misPub.begin(); it != misPub.end(); ++it)
  {
  
    Publicacion*pub=it->first;
    if (pub->getFechaPub().esPosterior(desde)==true){
    if (it->second==palabra ){
      resultado.push_back(pub->getDoi());
    }
    }
  }
  
  return resultado;
}

string Investigador::toString() {
    return ORCID + "->" + Nombre + "/" + Institucion;
}