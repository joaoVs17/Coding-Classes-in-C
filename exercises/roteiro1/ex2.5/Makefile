all: main

main: main.o vetor.o
	gcc -Wall -o main main.o vetor.o

vetor.o: vetor.c vetor.h
	gcc -Wall -c vetor.c

main.o: main.c vetor.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
