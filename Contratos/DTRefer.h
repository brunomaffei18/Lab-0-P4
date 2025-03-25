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
    DTRefer(string DOI, string titulo, DTFecha fecha); 
    string getDOI();
    string getTitulo();
    DTFecha getFecha();
    vector<string> getAutores();
};

ostream& operator<<(ostream& os, const DTRefer& dt);
