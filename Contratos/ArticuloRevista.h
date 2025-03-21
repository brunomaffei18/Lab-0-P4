#include <string>
#include "../Contratos/Publicacion.h"
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
    bool contienePalabra(std::string palabra);
};