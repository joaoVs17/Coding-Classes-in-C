#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

Pilha* inicializaPilha() {
  Pilha * p = (Pilha *) malloc(sizeof(Pilha));
  p->tam = 0;
  p->fundo = (Item*) malloc(sizeof(Item));
  p->topo = p->fundo;
  p->fundo->ant = NULL;
  return p;
}

void empilha(Pilha* p, int n) {

  Item* item = (Item *) malloc(sizeof(Item));
  item->ant = p->topo;
  item->val = n;
  p->topo = item;
  p->tam ++;
}

bool desempilha(Pilha* p, int * val) {
  
  if (vazia(p)) return false; 
  *val = p->topo->val;
  Ponteiro n_topo = p->topo->ant;
  free(p->topo);
  p->topo = n_topo;
  p->tam --;
  return true;

}

bool vazia(Pilha * p ) {
  if (p->tam == 0) return true;
  return false;
}

int tamanho(Pilha *p) {
  return p->tam;
}



