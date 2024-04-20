#include "lista.h"
#include <stdio.h>

int main() {
  
  Array lista;
  initArray(&lista);
  
  Item item;
  int n_elem;

  printf("Nº de elementos a adicionar: ");
  scanf("%d", &n_elem);
  if (n_elem>100) {
    printf("Insira um número inferior a 100\n");
    return -1;
  }
  printf("Adicione números inteiros: \n");
  for (int i=0; i<n_elem; i++) {
    printf("%dº elemento: ", i+1);
    scanf("%d", &item.value);
    addElementOrderly(&lista, item);
  }
  printf("Lista: \n");
  printArray(&lista);
  printf("Digite algum valor para procurar: ");
  scanf("%d", &item.value);
  int index = procura(&lista, item);
  if (index == -1) {
    printf("Esse elemento não está presente\n");
  } else {
    printf("Elemento presente na posição %d\n", index);
  }
  return 0;
}
