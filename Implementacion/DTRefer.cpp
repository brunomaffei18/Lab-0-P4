#include "../Contratos/DTRefer.h"

DTRefer :: DTRefer(string DOI, string titulo, DTFecha fecha){
    this->fecha = fecha;
    this->DOI = DOI;
    this->titulo = titulo;
    this->autores = list<string>();
}