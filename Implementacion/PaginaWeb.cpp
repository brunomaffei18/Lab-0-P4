#include"../Contratos/PaginaWeb.h"


//creador
    PaginaWeb::PaginaWeb(std::string url, std::string contenido, std::string DOI, std::string titulo, DTFecha fecha):Publicacion( DOI,  titulo, fecha)
        {
        this->contenido=contenido;
        this->url=url;
       
    };
  //destructor
   PaginaWeb:: ~PaginaWeb(){

   };
  //getters
  string PaginaWeb::getContenido(){
    return this->contenido;
  }
  string PaginaWeb::getUrl(){
    return this->url;
  }


  //funciones
    bool PaginaWeb::contienePalabra(std::string palabra){
        return contenido.find(palabra)!=string::npos;
    }



