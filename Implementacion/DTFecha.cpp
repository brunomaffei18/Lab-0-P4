#include "../Contratos/DTFecha.h"

DTFecha::DTFecha(int dia,int mes,int anio){
    this->Dia=dia;
    this->Mes=mes;
    this->Anio=anio;
}

int DTFecha::getDia(){
    return this->Dia;
}
int DTFecha::getMes(){
    return this->Mes;
}
int DTFecha::getAnio(){
    return this->Anio;
}



//Si fecha 1 es mayor que fecha 2 devuelve true sino devuelve false  
 bool DTFecha::esPosterior(DTFecha fecha2){
    if (this->Anio>fecha2.getAnio())
    {
        return true;
    }else{
        if (this->Anio==fecha2.getAnio())
        {
            if (this->Mes>fecha2.getMes())
            {
                return true;
            }else{
                if (this->Mes==fecha2.getMes())
                {
                    if (this->Dia>fecha2.getDia())
                    {
                        return true;
                    }else{
                        return false;
                    }
                    
                }else{
                    return false;
                }
                
            }
            
        }else{
            return false;
        }
        
    }
    
}

std::ostream& operator<<(std::ostream& os, DTFecha& dt){
    os << dt.getDia() << "/" << dt.getMes() << "/" << dt.getAnio();
    return os;
}

