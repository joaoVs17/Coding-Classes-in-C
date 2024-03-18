all: main

main: main.o letras.o
	gcc -Wall -o main main.o letras.o

letras.o: letras.c letras.h
	gcc -Wall -c letras.c

main.o: main.c letras.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
