#ifndef DTFECHA_H
#define DTFECHA_H

#include <iostream>

class DTFecha{
 private:
  int Dia, Mes,Anio;
  public:
  DTFecha(int dia,int mes, int anio);
  int get_Dia();
  int get_Mes();
  int get_anio();
  bool compararFechas(DTFecha fecha1, DTFecha fecha2);
 
};



#endif