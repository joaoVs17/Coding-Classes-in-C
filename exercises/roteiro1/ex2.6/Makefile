all: main

main: main.o hanoi.o
	gcc -Wall -o main main.o hanoi.o

hanoi.o: hanoi.c hanoi.h
	gcc -Wall -c hanoi.c

main.o: main.c hanoi.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
