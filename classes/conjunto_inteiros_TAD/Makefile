all: main

main: main.o conjunto.o
	gcc -Wall -o main main.o conjunto.o

conjunto.o: conjunto.c conjunto.h
	gcc -Wall -c conjunto.c

main.o: main.c conjunto.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
