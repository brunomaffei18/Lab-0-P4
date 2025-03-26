#include "../Contratos/Libro.h"

//no se si esto esta bien 
Libro::Libro(string editorial, vector <string> palabrasDestacadas,DTFecha fecha, string titulo, string doi ):Publicacion(doi,  titulo, fecha){
    this->editorial=editorial;
    this->palabrasDestacadas=palabrasDestacadas;
};

//getters

string Libro::getEditorial(){
  return this->editorial;
}

vector<string> Libro::getPalabraDestacada(){
  return this->palabrasDestacadas;
}


//funciones
  bool Libro::contienePalabra(string palabra){
    //find biene de la biblioteca de algoritms lo que hace es buscar directamente palabra adentro de palabrasdestacada y lo devuelve
    //.begin() nos devuelve donde comienza el palabradestacada y . end() devuelve un elemento despues del ultimo 
      if (find(palabrasDestacadas.begin(),palabrasDestacadas.end(),palabra)!=palabrasDestacadas.end()){
        return true;
      }else{
        return false;
      }
  }
