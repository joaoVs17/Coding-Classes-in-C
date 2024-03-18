all: main

main: main.o multi.o
	gcc -Wall -o main main.o multi.o

multi.o: multi.c multi.h
	gcc -Wall -c multi.c

main.o: main.c multi.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
