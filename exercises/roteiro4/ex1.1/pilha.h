#ifndef PILHA_H
#define PILHA_H

#include <stdbool.h>

typedef struct Item* Ponteiro;

typedef struct Item {
  int val;
  Ponteiro ant;
} Item;

typedef struct Pilha {
  
  Ponteiro topo, fundo;
  int tam;

} Pilha;

Pilha* inicializaPilha();
void empilha(Pilha*, int);
bool desempilha(Pilha*, int*);
bool vazia(Pilha*);
int tamanho(Pilha*);


#endif
