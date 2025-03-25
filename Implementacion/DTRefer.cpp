#include "../Contratos/DTRefer.h"
#include "../Contratos/DTFecha.h"
#include <vector>

using namespace std;


DTRefer :: DTRefer(string DOI, string titulo, DTFecha fecha, vector<string>autores){
    this->fecha = fecha;
    this->DOI = DOI;
    this->titulo = titulo;
    this->autores = autores;
}


//Geters
string DTRefer:: getDOI(){
    return DOI;
}

string DTRefer:: getTitulo(){
    return titulo;
}

DTFecha DTRefer :: getFecha(){
    return fecha;
}

vector<string> DTRefer :: getAutores(){
    return autores;
}


//Funciones
ostream& operator<<(ostream& os, DTRefer& Refer){
    os << Refer.getDOI() << "->" << Refer.getTitulo() << " (" << Refer.getFecha() << ") /";
    vector<string> autores = Refer.getAutores();
    for (int i = 0; i < autores.size(); i++)
    {
        os << autores[i];
        if (i < autores.size()-1)
        {
            os << ", ";
        }
        
    }
    return os;
    
}
