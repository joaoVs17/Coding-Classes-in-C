all: main

main: main.o banco.o
	gcc -Wall -o main main.o banco.o

banco.o: banco.c banco.h
	gcc -Wall -c banco.c

main.o: main.c banco.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
