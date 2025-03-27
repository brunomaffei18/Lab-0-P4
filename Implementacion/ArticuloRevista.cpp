#include "../Contratos/ArticuloRevista.h"

ArticuloRevista::ArticuloRevista(string revista, string extracto, string DOI, string titulo, DTFecha fecha):Publicacion(DOI,  titulo, fecha){
 this->extracto=extracto;
 this->revista=revista;
 
}
ArticuloRevista::~ArticuloRevista(){
    Publicacion::~Publicacion();
}
string ArticuloRevista::getExtracto(){
    return this->extracto;
}
string ArticuloRevista::getRevista(){
    return this->revista;
}

bool comparar(string extracto, int pos,int ne ,string palabra,int np ){
   int  i=0;
   bool igual=true;
    while (pos<ne && i<np &&igual)
    {
        if (extracto[pos]!=palabra[i])
        {
            igual=false;
        }
        pos++;
        i++;
        
    }
    if(pos-ne>0 && extracto[pos-np-1]==' '){
    
        igual=false;
      
    }
if (pos<ne && extracto[pos]==' ')
{
    igual=false;
}
    return igual;

}

bool ArticuloRevista::contienePalabra(string palabra){
int largo=extracto.size();
int palabralargo=palabra.size();
bool esta=false; 
for (int i = 0; i < largo && !esta; i++)
{
    if(extracto[i]==palabra[0]){
     esta=comparar(extracto,i,largo,palabra,palabralargo);
    }
}



    return esta;

}