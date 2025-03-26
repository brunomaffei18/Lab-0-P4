#include <iostream>
#include <list>
#include <map>
#include "Contratos/Publicacion.h"
#include "Contratos/Investigador.h"
#include "Contratos/DTRefer.h"
#include "Contratos/ArticuloRevista.h"
#include "Contratos/PaginaWeb.h"
#include "Contratos/Libro.h"

std::list<Publicacion*> publicaciones;
std::map<std::string, Publicacion*> map_publicaciones;

std::list<Investigador*> investigadores;
std::map<std::string, Investigador*> map_investigadores;

void coleccion_guardarPublicacion(Publicacion* pub){
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion*> entry(pub->getDT().getDOI(), pub);
    map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion* pub){
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDT().getDOI());
}

void coleccion_guardarInvestigador(Investigador* inv){
	investigadores.push_back(inv);
	std::pair<std::string, Investigador*> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
}

Investigador* coleccion_getInvestigador(std::string ORCID){
	return map_investigadores[ORCID];
}

Publicacion* coleccion_getPublicacion(std::string DOI){
	return map_publicaciones[DOI];
}

void parte_a(){
    string extracto1 = "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.";
    DTFecha fecha1 = DTFecha(15,5,2023);
    ArticuloRevista * revista1 = new ArticuloRevista("Programación Avanzada",extracto1,"10.1234/abc123","Fundamentos de POO",fecha1);
    coleccion_guardarPublicacion(revista1);

    string extracto2 = "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases.";
    DTFecha fecha2 = DTFecha(10,2,2024);
    ArticuloRevista * revista2 = new ArticuloRevista("Modelado de Software",extracto2,"10.4567/jkl012","Utilidad de diagramas UML",fecha2);
    coleccion_guardarPublicacion(revista2);
}

void parte_b(){
    DTFecha fecha1 = DTFecha(20,8,2022);
    vector<string> destacadas1 = {"Diseno","OOP","Class"};
    Libro * libro1 = new Libro("Software Design", destacadas1,fecha1,"Patrones de Diseno en c++","10.2345/def456");
    coleccion_guardarPublicacion(libro1);

    DTFecha fecha2 = DTFecha(20,8,2022);
    vector<string> destacadas2 = {"Diagramas","UML","Software","Modelado"};
    Libro * libro2 = new Libro("IEEE", destacadas2,fecha2,"Guia de UML","10.5678/mno345");
    coleccion_guardarPublicacion(libro2);
}

void parte_c(){
    string contenido = "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades.";
    DTFecha fecha = DTFecha(20,10,2024);
    PaginaWeb * pagina = new PaginaWeb("www.umlparaprincipiantes.com",contenido,"10.3456/ghi789","Diagramas para Principiantes",fecha);
    coleccion_guardarPublicacion(pagina);
}

void parte_d(){
	for (auto publi : publicaciones)
	{
		std::cout<<publi->getDT() << std::endl;
	}
}

void parte_e(){
    Investigador * persona1 = new Investigador("Carla Oliveri","0000-0003-1234-5678","Universidad de la Republica");
    coleccion_guardarInvestigador(persona1);

	Investigador * persona2 = new Investigador("Alberto Santos","0000-0001-8765-4321","Instituto Tecnico");
    coleccion_guardarInvestigador(persona2);
}

void parte_f(){
	for (auto persona : investigadores)
	{
		std::cout<< persona->toString() << std::endl;
	}
	
}

void parte_g(){
	Investigador * carla = coleccion_getInvestigador("0000-0003-1234-5678");
	Investigador * alberto = coleccion_getInvestigador("0000-0001-8765-4321");

	std::vector<std::string> nuevasCarla = {"10.1234/abc123","10.4567/jkl012","10.5678/mno345","10.3456/ghi789"};
    std::vector<std::string> nuevasAlberto = {"10.1234/abc123","10.2345/def456","10.4567/jkl012"};

	//Publicaciones de Carla
    for (auto doi : nuevasCarla) {
        Publicacion* publi = coleccion_getPublicacion(doi);
		carla->agregarPublicacionAInvestigador(publi);
		publi->setMapInve(carla->getORCID(),carla);
    }

	//Publicaciones de Alberto
    for (auto doi : nuevasAlberto) {
        Publicacion* publi = coleccion_getPublicacion(doi);
		alberto->agregarPublicacionAInvestigador(publi);
		publi->setMapInve(alberto->getORCID(),alberto);
    }
}

void parte_h(){
}

void parte_i(){
}

void parte_j(){
}

void parte_k(){
}


int main() {
	std::cout << "parte_a" <<  std::endl;
	parte_a();
	std::cout << "parte_b" <<  std::endl;
	parte_b();
	std::cout << "parte_c" <<  std::endl;
	parte_c();
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	parte_e();
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
//	std::cout << "cleanUp" <<  std::endl;
//	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}