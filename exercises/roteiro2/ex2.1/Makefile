all: main

main: main.o catalogo.o
	gcc -Wall -o main main.o catalogo.o

catalogo.o: catalogo.c catalogo.h
	gcc -Wall -c catalogo.c

main.o: main.c catalogo.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
