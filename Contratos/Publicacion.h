#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <map>
#include "../Contratos/Investigador.h"
#include "../Contratos/DTRefer.h"
#include "../Contratos/DTFecha.h"

class Publicacion{
 private:
  std::string DOI;
  std::string titulo;
  DTFecha fecha;
  map <Investigador*, std::string> misInvestigadores;
 public:
 //creadores
  Publicacion(std::string DOI, std::string titulo, DTFecha fecha);
 //destructores
  ~Publicacion();
 //getters

  DTFecha getFechaPub();
  std::string getTitulo();
  std::string getDoi();
 //setters 
  void setMapInve();
 //Funciones
 DTRefer getDT();
 bool contienePalabra(std::string palabra);
 void imprimir();
  
};



#endif