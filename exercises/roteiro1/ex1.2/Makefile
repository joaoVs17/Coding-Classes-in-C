all: main

main: main.o vet.o
	gcc -Wall -o main main.o vet.o

vet.o: vet.c vet.h
	gcc -Wall -c vet.c

main.o: main.c vet.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
