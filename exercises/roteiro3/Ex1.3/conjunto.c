#include "conjunto.h"
#include <stdlib.h>
#include <stdio.h>

//Inicializa conjunto vazio
void initConjunto(Conjunto * c) {
  c->sz = 0;
  c->primeiro = (Ponteiro) malloc(sizeof(Celula));
  c->ultimo = c->primeiro;
  c->primeiro->prox = NULL;
}

//imprime valores do conjunto
void imprime(Conjunto * c) {
  if (c->sz == 0) {
    printf("{ }\n");
    return;
  }
  Ponteiro p = c->primeiro;
  printf("{ ");
  do {
    p = p->prox;

    printf("%d.. ", p->val);

  } while(p->prox != NULL);
  printf(" }\n");

}

//Verifica se um elemento pertence ao conjunto
int pertence(Conjunto *c, int n) {
  
  if (!c->sz) return 0;

  Ponteiro p = c->primeiro;
  
  do {

    p = p->prox;

    if (p->val == n) {
      return 1;
    }

  } while (p->prox != NULL);

  return 0;
}

//Adiciona elemento ao conjunto
void adicionaElemento(Conjunto * c, int n) {

  if  (pertence(c, n)) {
    return;
  }

  c->ultimo->prox = (Ponteiro) malloc(sizeof(Celula));
  c->ultimo = c->ultimo->prox;
  c->ultimo->val = n;
  c->ultimo->prox = NULL;
  c->sz ++;
}

//Remove elemento do conjunto
void removeElemento(Conjunto * c, int n) {

  if (!pertence(c, n)) {
    return;
  }

  Ponteiro p = c->primeiro;

  do {
    
    if (p->prox->val == n) {
      if (p->prox->prox == NULL) {
        free(p->prox);
        p->prox = NULL;
        c->sz --;
        c->ultimo = p;
        break;
      } 
      Ponteiro aux = p->prox->prox;
      free(p->prox);
      p->prox = aux;
      c->sz --;
      break;
    }

    p = p->prox;

  } while (p->prox != NULL);

}

Conjunto uniao(Conjunto* c1, Conjunto* c2) {

  Conjunto c;
  initConjunto(&c);

  if (c1->sz > 0) {   
    Ponteiro p = c1->primeiro;
    do {
      p = p->prox;
      adicionaElemento(&c, p->val);
    } while(p->prox != NULL);

  }

  if (c2->sz > 0) {
    Ponteiro p = c2->primeiro;
    do {
      p = p->prox;
      adicionaElemento(&c, p->val);
    } while(p->prox != NULL);
  }

  return c;

}

Conjunto intersec(Conjunto* c1, Conjunto* c2) {
  
  Conjunto c;
  initConjunto(&c);

  if (c1->sz == 0 ) {
    return c;
  }

  Ponteiro p = c1->primeiro;

  do {
    p = p->prox;
    if (pertence(c2, p->val)) {
      adicionaElemento(&c, p->val);
    }
  } while(p->prox != NULL);

  return c;
}

Conjunto diferenca(Conjunto* c1, Conjunto* c2) {
  
  Conjunto c;
  initConjunto(&c);

  if (c1->sz == 0) {
    return c;
  }

  Ponteiro p = c1->primeiro;
  do {
    p = p->prox;
    if (!pertence(c2, p->val)) {
      adicionaElemento(&c, p->val);
    }
  } while(p->prox != NULL);

  return c;
}

int menor(Conjunto *c) {

  if (c->sz == 0) return -1;
  if (c->sz == 1) return c->primeiro->prox->val;

  Ponteiro p = c->primeiro->prox;
  int n = p->val;

  do {
    p = p->prox;
    if (p->val < n) n = p->val; 
  } while(p->prox != NULL);

  return n;
} 
int maior(Conjunto* c) {

  if (c->sz == 0) return -1;
  if (c->sz == 1) return c->primeiro->prox->val;

  Ponteiro p = c->primeiro->prox;
  int n = p->val;

  do {
    p = p->prox;
    if (p->val > n) n = p->val;
  } while(p->prox != NULL);

  return n;
}

int iguais(Conjunto* c1, Conjunto* c2) {
  
  if (c1->sz != c2->sz) {
    return 0;
  }

  Ponteiro p = c1->primeiro;
  do {
    p = p->prox;
    
    if (!pertence(c2, p->val)) {
      return 0;
    }

  } while(p->prox != NULL);

  return 1;
}



//Retorna tamanho do conjunto
int tamanhoConjunto(Conjunto * c) {
  return c->sz;
}

//Verifica se o conjunto é vazio
int vazio(Conjunto * c) {
  return !(c->sz);
}

//Destrói Conjunto
void destroiConjunto(Conjunto * c) {

  if (c->sz > 0) {
    do {
      removeElemento(c, c->primeiro->prox->val);
    }while(c->primeiro->prox != NULL);
  }

}

