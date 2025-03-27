#ifndef DTFECHA_H
#define DTFECHA_H

#include <iostream>

class DTFecha{
 private:
  int Dia, Mes,Anio;
public:
  DTFecha(int dia,int mes, int anio);
  int getDia()const;
  int getMes()const;
  int getAnio()const;
  bool esPosterior(DTFecha fecha2);
 
};

std::ostream& operator<<(std::ostream& os, const DTFecha& dt);

#endif