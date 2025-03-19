OBJETOS = ArticuloRevista.o DTFecha.o DTRefer.o Investigador.o Libro.o PaginaWeb.o Publicacion.o

FUENETES= ./Implementacion/ArticuloRevista.cpp ./Contratos/ArticuloRevista.h \
		  ./Implementacion/DTFecha.cpp ./Contratos/DTFecha.h \
		  ./Implementacion/DTRefer.cpp ./Contratos/DTRefer.h \
		  ./Implementacion/Investigador.cpp ./Contratos/Investigador.h \
		  ./Implementacion/Libro.cpp ./Contratos/Libro.h \
		  ./Implementacion/PaginaWeb.cpp ./Contratos/PaginaWeb.h \
		  ./Implementacion/Publicacion.cpp ./Contratos/Publicacion.h 

CC = g++

OPCIONES = -o -g --wall

## al agregar $(OBJETOS) son las dependencias nesessarias para esta instriccion 
##Makefile al final hace que si alguno de los archivos se altere este vuelva a ejecutar la instriccion 
ejec: $(OBJETOS) main.cpp Makefile
	$(CC) $(OPCIONES) $(OBJETOS) main.cpp

DTFecha.o: DTFecha.cpp DTFecha.h
	$(CC) $(OPCIONES) -c DTFecha.cpp -o DTFecha.o

DTRefer.o: DTRefer.cpp DTRefer.h
	$(CC) $(OPCIONES) -c DTRefer.cpp -o DTRefer.o

Investigador.o: DTFecha.o Investigador.cpp Investigador.h
	$(CC) $(OPCIONES) -c Investigador.cpp -o Investigador.o

Publicacion.o: DTFecha.o DTRefer.o Publicacion.cpp Publicacion.h
	$(CC) $(OPCIONES) -c Publicacion.cpp -o Investigador.o

PaginaWeb.o: Publicacion.o PaginaWeb.cpp PaginaWeb.h
	$(CC) $(OPCIONES) -c PaginaWeb.cpp -o PaginaWeb.o

Libro.o: Publicacion.o Libro.cpp Libro.h
	$(CC) $(OPCIONES) -c Libro.cpp -o PaginaWeb.o
 
ArticuloRevista.o: Publicacion.o Libro.cpp Libro.h
	$(CC) $(OPCIONES) -c ArticuloRevista.cpp -o PaginaWeb.o
 
Clean:
	rm -f $(OBJETOS) ejec

##Entrega Instricion que crearia la entrega 