#include "../Contratos/DTRefer.h"
#include "../Contratos/DTFecha.h"
#include <vector>


DTRefer :: DTRefer(string DOI, string titulo, DTFecha fecha){
    this->fecha = fecha;
    this->DOI = DOI;
    this->titulo = titulo;
    this->autores = vector<string>();
}

ostream& operator<<(ostream& os, DTRefer& dt) {
    os << dt.getDOI() << "->" << dt.getTitulo() << " (" << dt.getFecha() << ") /";
    
    vector<string> autores = dt.getAutores();
    for (size_t i = 0; i < autores.size(); i++) {
        os << autores[i];
        if (i < autores.size() - 1) {
            os << ", ";
        }
    }
    return os;
}
