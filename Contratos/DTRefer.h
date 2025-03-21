#include <string>
#include <iostream>
#include <list>

#include "../Contratos/DTFecha.h"

using namespace std;

class DTRefer
{
private:
    string DOI;
    string titulo;
    DTFecha fecha;
    list<string> autores;

public:
    DTRefer(string DOI, string titulo, DTFecha fecha); //al implementarlo autores hay q declararlo vacio
};