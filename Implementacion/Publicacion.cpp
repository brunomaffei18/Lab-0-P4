#include <string>
#include <map>
#include <vector>
#include <utility>
#include <iostream>
#include <set>
#include "../Contratos/Publicacion.h"
#include "../Contratos/Investigador.h"
#include "../Contratos/DTRefer.h"
#include "../Contratos/DTFecha.h"

//Creador
Publicacion::Publicacion(std::string DOI, std::string titulo, const DTFecha& fecha)
    : DOI(DOI), titulo(titulo), fecha(fecha) {}

//Geters
std::string Publicacion::getTitulo(){
    return titulo;
}

std::string Publicacion::getDoi(){
    return DOI;
}

DTFecha Publicacion::getFecha(){
    return fecha;
}


//Manejo de Investigadores.
void Publicacion::agregarInvestigador(Investigador* Inv){
    misInvestigadores.insert(std::pair<std::string, Investigador*>(Inv->getORCID(), Inv));
}

void Publicacion::removerInvestigador(string orcidInve){
    misInvestigadores.erase(orcidInve);
}


//Funciones
DTRefer Publicacion::getDT(){
    std::vector<std::string>autores;
    
    for (std::map<std::string, Investigador*>::iterator it = misInvestigadores.begin(); it != misInvestigadores.end(); ++it)
    {
        autores.push_back(it->second->getNombre());
    }
    DTRefer Refer = DTRefer(DOI,titulo,fecha,autores);
    return Refer;
}

//No se debe implementar contienePalabara
