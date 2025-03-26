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
map<string,Publicacion*> Investigador::getMapPub(){
  return this->misPub;
}
//Funciones
vector<string> Investigador::listarPublicaciones(DTFecha desde,string DOI){
  vector <string> resultado;
  
  for (auto it= misPub.begin(); it != misPub.end(); ++it)
  {
  
    Publicacion*pub=it->second;
    if (pub->getFechaPub().esPosterior(desde)==true){
    if (it->first==DOI ){
      resultado.push_back(pub->getDoi());
    }
    }
  }
  
  return resultado;
}
void Investigador:: agregarPublicacionAInvestigador(Publicacion*Pub){
       misPub.insert(std::pair<string,Publicacion*>(Pub->getDoi(),Pub));
}


void Investigador::quitarpublicacion(string DOI){
 misPub.erase(DOI);
 
}


string Investigador::toString() {
    return ORCID + "->" + Nombre + "/" + Institucion;
}