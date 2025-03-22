#include "../Contratos/ArticuloRevista.h"

ArticuloRevista::ArticuloRevista(string revista, string extracto, string DOI, string titulo, DTFecha fecha):Publicacion(DOI,  titulo, fecha){
 this->extracto=extracto;
 this->revista=revista;
 Publicacion(DOI,titulo,fecha);
}
ArticuloRevista::~ArticuloRevista(){
    Publicacion::~Publicacion();
}

bool ArticuloRevista::contienePalabra(string palabra){
    return extracto.find(palabra)!=NULL;

}