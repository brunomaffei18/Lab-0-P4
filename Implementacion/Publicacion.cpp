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


Publicacion::Publicacion(std::string DOI, std::string titulo, DTFecha fecha){
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;

    
};

DTRefer Publicacion::getDT(){
    std::set<std::string>autores;
    for (auto i = misInvestigadores.begin(); i != misInvestigadores.end(); i++)
    {
        autores.insert(i->first->getNombe());
    }
    
    DTRefer Refer = DTRefer(DOI,titulo,fecha,autores);
    return Refer;
}

//No se implelemnta contien Palabara
