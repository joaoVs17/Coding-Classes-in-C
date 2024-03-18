all: main

main: main.o intervalo.o
	gcc -Wall -o main main.o intervalo.o

intervalo.o: intervalo.c intervalo.h
	gcc -Wall -c intervalo.c

main.o: main.c intervalo.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
