#include <string>
#include "../Contratos/DTFecha.h"
#include <list>

using namespace std;

class DTRefer
{
private:
    string DOI;
    string titulo;
    DTFecha fecha;
    list<string> autores;

public:
    DTRefer(string DOI, strig titulo, DTFecha fecha); //al implementarlo autores hay q declararlo vacio
    ~DTRefer();
};