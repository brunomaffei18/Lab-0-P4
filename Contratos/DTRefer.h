#ifndef DTREFER_H
#define DTREFER_H

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
    DTRefer(string DOI, string titulo, const DTFecha& fecha,vector<string>autores);
    string getTitulo()const;
    DTFecha getFecha()const;
    vector<string> getAutores()const;
    string getDOI()const;
    string toString();

};

ostream& operator<<(ostream& os, const DTRefer& dt);

#endif