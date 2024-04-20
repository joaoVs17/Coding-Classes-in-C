all: main

main: main.o lista.o
	gcc -Wall -o main main.o lista.o

lista.o: lista.c lista.h
	gcc -Wall -c lista.c

main.o: main.c lista.h
	gcc -Wall -c main.c

clean: 
	rm -rf *.o *~ main
