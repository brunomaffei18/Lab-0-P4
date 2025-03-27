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

class Investigador;
class Publicacion{
 private:
  std::string DOI;
  std::string titulo;
  DTFecha fecha;
  map <std::string, Investigador*> misInvestigadores;

 public:
 //Creador
  Publicacion(std::string DOI, std::string titulo, DTFecha fecha);

 //Getters
  DTFecha getFecha();
  std::string getTitulo();
  std::string getDoi();

 //Manejo de Autores 
  void agregarInvestigador(Investigador *Investigador);
  void removerInvestigador(string);

 //Funciones
 DTRefer getDT();
 virtual bool contienePalabra(std::string palabra) = 0;
  
};

#endif