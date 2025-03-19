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
	$(CC) $(OPCIONES) -c DTRefer.cpp -o 

