#include <string>
#include "../Contratos/Publicacion.h"
class PaginaWeb : public Publicacion{
private:
    std::string url;
    std::string contenido;
public:
  //creador
    PaginaWeb(std::string url, std::string contenido, std::string DOI, std::string titulo, DTFecha fecha);
  //destructor
    ~PaginaWeb();
  //getters
    bool contienePalabra(std::string palabra);
};