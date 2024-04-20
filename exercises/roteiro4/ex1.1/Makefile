all: main

main: main.o pilha.o
	gcc -Wall -o main main.o pilha.o

pilha.o: pilha.c pilha.h
	gcc -Wall -c pilha.c

main.o: main.c pilha.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
