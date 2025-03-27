#include "../Contratos/DTRefer.h"
#include "../Contratos/DTFecha.h"
#include <vector>

using namespace std;

DTRefer::DTRefer(string DOI, string titulo, const DTFecha& fecha, vector<string> autores)
    : DOI(DOI), titulo(titulo), fecha(fecha), autores(autores) {}



//Geters
string DTRefer:: getDOI()const{
    return DOI;
}

string DTRefer:: getTitulo()const{
    return titulo;
}

DTFecha DTRefer :: getFecha()const{
    return fecha;
}

vector<string> DTRefer :: getAutores()const{
    return autores;
}


//Funciones
ostream& operator<<(ostream& os,const DTRefer& Refer){
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
