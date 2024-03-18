all: main

main: main.o raizes.o
	gcc -Wall -o main main.o raizes.o -lm

raizes.o: raizes.c raizes.h
	gcc -Wall -c raizes.c

main.o: main.c raizes.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
