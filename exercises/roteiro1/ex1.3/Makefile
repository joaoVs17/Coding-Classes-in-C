all: main

main: main.o aluno.o
	gcc -Wall -o main main.o aluno.o

aluno.o: aluno.c aluno.h
	gcc -Wall -c aluno.c

main.o: main.c aluno.h
	gcc -Wall -c main.c

clean:
	rm -rf *.o *~ main
