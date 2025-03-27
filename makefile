OBJETOS = ArticuloRevista.o DTFecha.o DTRefer.o Investigador.o Libro.o PaginaWeb.o Publicacion.o

FUENTES= ./Implementacion/ArticuloRevista.cpp ./Contratos/ArticuloRevista.h \
		  ./Implementacion/DTFecha.cpp ./Contratos/DTFecha.h \
		  ./Implementacion/DTRefer.cpp ./Contratos/DTRefer.h \
		  ./Implementacion/Investigador.cpp ./Contratos/Investigador.h \
		  ./Implementacion/Libro.cpp ./Contratos/Libro.h \
		  ./Implementacion/PaginaWeb.cpp ./Contratos/PaginaWeb.h \
		  ./Implementacion/Publicacion.cpp ./Contratos/Publicacion.h 

CC = g++

OPCIONES = -o -g

## al agregar $(OBJETOS) son las dependencias nesessarias para esta instriccion $(CC) $(OPCIONES) $(OBJETOS) ./main.cpp -o ./main.o
##Makefile al final hace que si alguno de los archivos se altere este vuelva a ejecutar la instriccion 
ejec: $(OBJETOS) main.cpp makefile
	g++ -o principal $(OBJETOS) main.cpp

main.o: main.cpp
	$(CC) -c main.cpp -o main.o

DTFecha.o: ./Contratos/DTFecha.h ./Implementacion/DTFecha.cpp
	$(CC) $(OPCIONES) -c ./Implementacion/DTFecha.cpp -o DTFecha.o

DTRefer.o: ./Implementacion/DTRefer.cpp ./Contratos/DTRefer.h
	$(CC) $(OPCIONES) -c ./Implementacion/DTRefer.cpp -o DTRefer.o

Investigador.o: DTFecha.o ./Implementacion/Investigador.cpp ./Contratos/Investigador.h
	$(CC) $(OPCIONES) -c ./Implementacion/Investigador.cpp -o Investigador.o

Publicacion.o: DTFecha.o DTRefer.o ./Implementacion/Publicacion.cpp ./Contratos/Publicacion.h
	$(CC) $(OPCIONES) -c ./Implementacion/Publicacion.cpp -o Publicacion.o

PaginaWeb.o: Publicacion.o ./Implementacion/PaginaWeb.cpp ./Contratos/PaginaWeb.h
	$(CC) $(OPCIONES) -c ./Implementacion/PaginaWeb.cpp -o PaginaWeb.o

Libro.o: Publicacion.o ./Implementacion/Libro.cpp ./Contratos/Libro.h
	$(CC) $(OPCIONES) -c ./Implementacion/Libro.cpp -o Libro.o
 
ArticuloRevista.o: Publicacion.o ./Implementacion/ArticuloRevista.cpp ./Contratos/ArticuloRevista.h
	$(CC) $(OPCIONES) -c ./Implementacion/ArticuloRevista.cpp -o ArticuloRevista.o
 
clean:
	rm -f $(OBJETOS) ejec

rebase:
	make clean && make

##Entrega Instricion que crearia la entrega 