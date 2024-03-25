#include "conjunto.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct ci {
  int valores[MAX_SIZE];
  int qtde;
} ConjuntoInteiros;

ConjuntoInteiros* criaConjuntoVazio() {
  ConjuntoInteiros*c = (ConjuntoInteiros*)malloc(sizeof(ConjuntoInteiros)); 
  c->qtde = 0;
  return c;
}

void insereInteiro(ConjuntoInteiros*c, int i) {
  if (c->qtde < MAX_SIZE) {
    c->valores[c->qtde] = i;
    c->qtde++;
  }
}

ConjuntoInteiros* uniao(ConjuntoInteiros*a, ConjuntoInteiros*b) {
  if ((a->qtde+b->qtde) > MAX_SIZE) {
    ConjuntoInteiros*c = criaConjuntoVazio();
    //copia a para c
    //copia os elementos não presentes em a para c
    return c;
  }
  return NULL;
}

void listar(ConjuntoInteiros *c) {
  if (c->qtde>0) {
    for (int i=0; i<c->qtde-1; i++) {
      printf("%d, ", c->valores[i]);
    }
    printf("%d\n", c->valores[c->qtde-1]);
      
  }
}

void destroi(ConjuntoInteiros *c) {
  c->qtde = 0;
}
