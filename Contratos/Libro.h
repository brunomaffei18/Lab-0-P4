#ifndef LIBRO_H
#define LIBRO_H
#include "DTFecha.h"
#include<string>
#include <algorithm>
#include "Publicacion.h"
#include <set>
using namespace std;

class Libro
{
private:
   string editorial;
   set <string> palabrasDestacadas;
public:
    Libro(string editorial, set<string> palabrasDestacadas,DTFecha fecha, string titulo, string doi );
   bool contienePalabra(string palabra);
};






#endif