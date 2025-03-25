#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <utility>      
#include <string>       
#include <iostream> 
#include <map>
#include <vector>
#include "../Contratos/Investigador.h"
#include "../Contratos/DTRefer.h"
#include "../Contratos/DTFecha.h"

class Publicacion{
 private:
  std::string DOI;
  std::string titulo;
  DTFecha fecha;
  map <Investigador*, std::string> misInvestigadores; //me parece que el orden es al reves, el primer valor seria la clave osea string y el segundo la clave es decir Investigador


 public:
 //creadores
  Publicacion(std::string DOI, std::string titulo, DTFecha fecha);
 //destructores
  ~Publicacion();
 //getters

  DTFecha getFechaPub(Publicacion Pub);
  std::string getTitulo(Publicacion Pub);
  std::string getDoi(Publicacion Pub);
 //setters 
  void setMapInve();
 //Funciones
 DTRefer getDT();
 //virtula y =0 parar que sea abstracta
 virtual bool contienePalabra(std::string palabra) = 0;
 void imprimir();
  
};



#endif