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


//Si fecha 1 es mayor que fecha 2 devuelve true sino devuelve false 
 bool DTFecha::compararFechas(DTFecha fecha1,DTFecha fecha2){
    if (fecha1.get_anio()>fecha2.get_anio())
    {
        return true;
    }else{
        if (fecha1.get_anio()==fecha2.get_anio())
        {
            if (fecha1.get_Mes()>fecha2.get_Mes())
            {
                return true;
            }else{
                if (fecha1.get_Mes()==fecha2.get_Mes())
                {
                    if (fecha1.get_Dia()>fecha2.get_Dia())
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



