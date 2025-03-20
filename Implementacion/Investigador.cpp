#include "../Contratos/Investigador.h"
#include "../Contratos/Publicacion.h"
#include"../Contratos/DTFecha.h"





std::string Investigador::toString(){
    std::ostringstream aux;
    aux << ORCID<<"->"<<Nombre<<"/"<<Institucion;;
   
    
    return aux.str();
}

Investigador::Investigador(std::string nombre,  std::string orcid ,std::string institucion){
  this->Institucion=institucion;
  this->Nombre=nombre;
  this->ORCID=orcid;

}


  set<string> Investigador::listaPublicaciones(DTFecha desde,string palabra){
    set <string> resultado;
    
   for (auto it= misPub.begin(); it != misPub.end(); ++it)
   {
     Publicacion*pub=it->first;
     if (DTFecha::compararFechas(getfechaPub(pub),desde)){
      if (it->second==palabra ){
        resultado.insert(it->getDoi);
      }
     }
   }
   
    return resultado;
  }