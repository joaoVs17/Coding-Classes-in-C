all: main

main: main.o negativos.o
	gcc -Wall -o main main.o negativos.o

negativos.o: negativos.c negativos.h
	gcc -Wall -c negativos.c

main.o: main.c negativos.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
