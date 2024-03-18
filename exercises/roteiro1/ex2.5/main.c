#include <stdio.h>
#include "vetor.h"
#include <stdlib.h>

int main() {

  int length;
  printf("Insert the length of the array: ");
  scanf("%d", &length);
  int *vet = (int *) malloc(sizeof(int)*length);
  fillVet(vet, length, 0);
  printUp(vet, length, 0);
  printf("\n");
  printDown(vet, length);
  printf("\n");
  free(vet);
  return 1;
}
