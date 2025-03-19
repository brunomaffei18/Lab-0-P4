#include "../Contratos/Investigador.h"

std::string Investigador::toString(){
    std::ostringstream aux;
    aux << ORCID<<"->"<<Nombre<<"/"<<Institucion;;
   
    
    return aux.str();
}
