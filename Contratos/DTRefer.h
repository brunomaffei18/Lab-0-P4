#include <string>
#include <iostream>
#include <vector>

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
    string getDOI();
    string getTitulo();
    DTFecha getFecha();
    vector<string> getAutores();

    string toString();

};

ostream& operator<<(ostream& os, const DTRefer& dt);
