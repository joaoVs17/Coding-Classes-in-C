all: main

main: main.o counter.o
	gcc -Wall -o main main.o counter.o

counter.o: counter.c counter.h
	gcc -Wall -c counter.c

main.o: main.c counter.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
