#ifndef CONJUNTO_H
#define CONJUNTO_H
#define MAX_SIZE 2

typedef struct ci ConjuntoInteiros;

ConjuntoInteiros* criaConjuntoVazio();
void insereInteiro(ConjuntoInteiros*, int);
ConjuntoInteiros* uniao(ConjuntoInteiros*, ConjuntoInteiros*);
void listar(ConjuntoInteiros*);
void destroi(ConjuntoInteiros*);

#endif
