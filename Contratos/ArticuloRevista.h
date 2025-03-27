#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include <string>
#include "../Contratos/Publicacion.h"
using namespace std;
class ArticuloRevista : public Publicacion{
private:
    std::string revista;
    std::string extracto;
public:
  //creador
    ArticuloRevista(std::string revista, std::string extracto, std::string DOI, std::string titulo, DTFecha fecha);
  //destructor
    ~ArticuloRevista();
  //getters
    string getRevista();
    string getExtracto();

    bool contienePalabra(std::string palabra);
};

#endif