#include "../Contratos/DTFecha.h"

DTFecha::DTFecha(int dia,int mes,int anio){
    this->Dia=dia;
    this->Mes=mes;
    this->Anio=anio;
}

int DTFecha::get_Dia(){
    return this->Dia;
}
int DTFecha::get_Mes(){
    return this->Mes;
}
int DTFecha::get_anio(){
    return this->Anio;
}
