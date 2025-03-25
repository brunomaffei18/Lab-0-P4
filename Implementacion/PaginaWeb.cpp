#include"../Contratos/PaginaWeb.h"


//creador
    PaginaWeb::PaginaWeb(std::string url, std::string contenido, std::string DOI, std::string titulo, DTFecha fecha):Publicacion( DOI,  titulo, fecha)
        {
        this->contenido=contenido;
        this->url=url;
        Publicacion(DOI,titulo,fecha);
    };
  //destructor
   PaginaWeb:: ~PaginaWeb(){

   };
  //getters
    bool PaginaWeb::contienePalabra(std::string palabra){
        return contenido.find(palabra)!=NULL;
    }



