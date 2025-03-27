#include"../Contratos/PaginaWeb.h"


//creador
    PaginaWeb::PaginaWeb(std::string url, std::string contenido, std::string DOI, std::string titulo, DTFecha fecha):Publicacion( DOI,  titulo, fecha)
        {
        this->contenido=contenido;
        this->url=url;
       
    };
  //destructor
   PaginaWeb:: ~PaginaWeb(){

   };
  //getters
  string PaginaWeb::getContenido(){
    return this->contenido;
  }
  string PaginaWeb::getUrl(){
    return this->url;
  }

bool comparar(string contenido, int pos,int ne ,string palabra,int np ){
   int  i=0;
   bool igual=true;
    while (pos<ne && i<np &&igual)
    {
        if (contenido[pos]!=palabra[i])
        {
            igual=false;
        }
        pos++;
        i++;
        
    }
    if(pos-ne>0 && contenido[pos-np-1]==' '){
    
        igual=false;
      
    }
if (pos<ne && contenido[pos]==' ')
{
    igual=false;
}
    return igual;

}

  //funciones
  bool PaginaWeb::contienePalabra(std::string palabra){
       int largo=contenido.size();
int palabralargo=palabra.size();
bool esta=false; 
for (int i = 0; i < largo && !esta; i++)
{
    if(contenido[i]==palabra[0]){
     esta=comparar(contenido,i,largo,palabra,palabralargo);
    }
}



    return esta;

}
    



