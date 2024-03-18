#include <stdlib.h>
#include <magic.h>
#include <stdio.h>
#include "vet.h"

int main() {

  int * tam = (int *) malloc(sizeof(int));

  printf("Type the length of the array 1: ");
  scanf("%d", tam);
  int * vet1 = (int *) malloc(sizeof(int) * (*tam));

  printf("Array 1: ");
  for (int i=0; i< *tam; i++) {
    vet1[i] = rand() % 1000;
    printf("%d, ", vet1[i]);
  }
  printf("\n");

  printf("Greatest number of array 1: %d\n", maior(vet1, *tam));
  printf("Smaller number of array 1: %d\n", menor(vet1, *tam));
  printf("Average of array 1: %f\n", media(vet1, *tam));

  free(vet1);

  printf("Type the length of the array 2: ");
  scanf("%d", tam);
  int * vet2 = (int *) malloc(sizeof(int)* (*tam));

  printf("Array 2: ");
  for (int i=0; i< *tam; i++) {
    vet2[i] = rand() % 1000;
    printf("%d, ", vet2[i]);
  }
  printf("\n");

  printf("Greatest number of array 2: %d\n", maior(vet2, *tam));
  printf("Smaller number of array 2: %d\n", menor(vet2, *tam));
  printf("Average of array 2: %f\n", media(vet2, *tam));

  free(vet2);
  free(tam);

  return 1;
}
