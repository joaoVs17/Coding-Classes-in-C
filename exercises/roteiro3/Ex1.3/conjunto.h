#ifndef CONJUNTO_H
#define CONJUNTO_H

typedef struct Celula* Ponteiro;  

typedef struct Celula {

  int val;
  Ponteiro prox;

} Celula;

typedef struct sConjunto {

  Ponteiro primeiro, ultimo;
  int sz;

} Conjunto;

void initConjunto(Conjunto *);
void destroiConjunto(Conjunto *);
void removeElemento(Conjunto *, int);
void adicionaElemento(Conjunto *, int);
int pertence(Conjunto *, int);
int tamanhoConjunto(Conjunto *);
Conjunto uniao(Conjunto*, Conjunto*);
Conjunto intersec(Conjunto*, Conjunto*);
Conjunto diferenca(Conjunto*, Conjunto*);
int maior(Conjunto*);
int menor(Conjunto*);
int iguais(Conjunto*, Conjunto*);
int tamanhoConjunto(Conjunto *);
int vazio(Conjunto *);
void imprime(Conjunto *);

#endif
