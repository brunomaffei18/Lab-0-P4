#ifndef LIBRO_H
#define LIBRO_H
#include "DTFecha.h"
#include<string>
#include <algorithm>
#include "Publicacion.h"
#include <vector>
#include "../Contratos/Publicacion.h"
using namespace std;

class Libro : public Publicacion
{
private:
   string editorial;
   vector <string> palabrasDestacadas;
public:
//creador   
Libro(string editorial, vector<string> palabrasDestacadas,DTFecha fecha, string titulo, string doi );
//destructor
~Libro();

//getters
string getEditorial();
vector<string> getPalabraDestacada();

//funciones

bool contienePalabra(string palabra);
};






#endif