#include "../Contratos/DTRefer.h"
#include "../Contratos/DTFecha.h"
#include <vector>


DTRefer :: DTRefer(string DOI, string titulo, DTFecha fecha){
    this->fecha = fecha;
    this->DOI = DOI;
    this->titulo = titulo;
    this->autores = vector<string>();
}

