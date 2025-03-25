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
    vector<string> autores;

public:
    DTRefer(string DOI, string titulo, DTFecha fecha,vector<string>autores);
    string getTitulo();
    DTFecha getFecha();
    vector<string> getAutores();
    string getDOI();
    string toString();

};

ostream& operator<<(ostream& os, const DTRefer& dt);
