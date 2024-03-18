#include <stdlib.h>
#include <stdio.h>
#include "negativos.h"

int main() {
  
  int N = 0;

  printf("Type the array lenght: ");
  scanf("%d", &N);

  float *vet = (float *) malloc( N * sizeof(float));;
  for (int i = 0; i<N; i++) {
    printf("Type the number in position %d: ", i+1);
    scanf("%f", &vet[i]);    
    printf("\n");
  }

  int neg = negativos(vet, N);
  printf("There are %d negative numbers in the array\n", neg);
  return 1;
}

