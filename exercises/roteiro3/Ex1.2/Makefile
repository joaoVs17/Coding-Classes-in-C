all: main

main: main.o cubo.o
	gcc -Wall -o main main.o cubo.o

cubo.o: cubo.c cubo.h
	gcc -Wall -c cubo.c

main.o: main.c cubo.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
