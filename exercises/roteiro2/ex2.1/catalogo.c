#include "catalogo.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct sProduto {
  
  char nome[50];
  double preco;
  int qtd;

} Produto;

typedef struct sCatalogoProdutos {

  Produto produtos[MAX_SIZE];
  int total;

} CatalogoProdutos;


CatalogoProdutos* criarCatalogo() {

  CatalogoProdutos* c = (CatalogoProdutos*)malloc(sizeof(CatalogoProdutos));
  
  c->total = 0;

  return c;

}

void adicionaProdutos(CatalogoProdutos* c, char* nome, double preco, int qtd) {

  int index = -1;
  if (c->total > 0) {
    for (int i=0; i<c->total; i++) {
      if (!strcmp(c->produtos[i].nome, nome)) {
        index = i;
      }
    }
  }
  
  if (index == -1) {
    if (c->total < MAX_SIZE) {
      strcpy(c->produtos[c->total].nome, nome);
      c->produtos[c->total].preco = preco;
      c->produtos[c->total].qtd = qtd;
      c->total++;
    }
  } else {
      c->produtos[index].qtd += qtd;
  }

}

int verificarEstoque(CatalogoProdutos* c, char* nome) {
  if (c->total > 0 ) {
    
    for (int i=0; i< c->total; i++) {
      if (!strcmp(c->produtos[i].nome, nome)) {
        return c->produtos[i].qtd;
      }
    }

  }
  return -1;
}

void imprimirCatalogo(CatalogoProdutos*c) {
  printf("Catálogo\n\n");
  for (int i=0;i < c->total; i++) {
    printf("Produto %d: \n", i+1);
    printf("Nome: %s\n", c->produtos[i].nome);
    printf("Preco: %.2lf\n", c->produtos[i].preco);
    printf("Quantidade: %d\n", c->produtos[i].qtd);
    printf("\n");
  }
}
