#include "conjunto.h"
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

  srand(time(NULL));

  printf("Digite o tamanho do 1º conjunto: ");
  int t1;
  scanf("%d", &t1);
  if (t1 <= 0) return 0;
  
  printf("Digite o tamanho do 2º conjunto: ");
  int t2;
  scanf("%d", &t2);
  if (t2 <= 0) return 0;

  Conjunto c1, c2;
  initConjunto(&c1);
  initConjunto(&c2);

  printf("\nNúmeros gerados para o conjunto 1: \n");
  for (int i=0; i<t1; i++) {
    int n = rand()%100;
    printf("%d.. ", n);
    adicionaElemento(&c1, n);
  }
  printf("\nNúmeros gerados para o conjunto 2: \n");
  for (int i=0;i<t2; i++) {
    int n= rand()%100;
    printf("%d.. ", n);
    adicionaElemento(&c2, n); 
  }
  printf("\n\n");
  printf("Conjunto 1: %d elementos, maior=%d, menor=%d\n", tamanhoConjunto(&c1), maior(&c1), menor(&c1));
  imprime(&c1);
  printf("Conjunto 2: %d elementos, maior=%d, menor=%d\n", tamanhoConjunto(&c2), maior(&c2), menor(&c2));
  imprime(&c2);
  printf("\nDigite um número para adicionar ao conjunto 1: ");
  scanf("%d", &t2);
  adicionaElemento(&c1, t2);
  printf("Conjunto 1: %d elementos\n", tamanhoConjunto(&c1));
  imprime(&c1);
  printf("\nDigite um número para remover do conjunto 2: ");
  scanf("%d", &t1);
  removeElemento(&c2, t1);
  printf("Conjunto 2: %d elementos\n", tamanhoConjunto(&c2));
  imprime(&c2);


  Conjunto uni = uniao(&c1, &c2);
  Conjunto inter = intersec(&c1, &c2);
  Conjunto dif = diferenca(&c1, &c2);
  
  printf("\nUnião: \n");
  imprime(&uni);
  printf("Interseção: \n");
  imprime(&inter);
  printf("Diferença: \n");
  imprime(&dif);

  if (vazio(&c1)) printf ("\nO conjunto 1 é vazio\n");
  else printf("\nO conjunto 1 não é vazio\n");
 
  if (iguais(&c1, &c2)) printf("\nOs conjuntos 1 e 2 são iguais\n");
  else printf("\nOs conjuntos 1 e 2 são diferentes\n");

  destroiConjunto(&c1);
  destroiConjunto(&c2);
  destroiConjunto(&uni);
  destroiConjunto(&inter);
  destroiConjunto(&dif);
  return 0;
}
