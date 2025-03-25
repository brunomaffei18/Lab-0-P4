#ifndef DTFECHA_H
#define DTFECHA_H

#include <iostream>

class DTFecha{
 private:
  int Dia, Mes,Anio;
public:
DTFecha();
  DTFecha(int dia,int mes, int anio);
  int getDia();
  int getMes();
  int getAnio();
  bool esPosterior(DTFecha fecha2);
 
};

std::ostream& operator<<(std::ostream& os, const DTFecha& dt);

#endif