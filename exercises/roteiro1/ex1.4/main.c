#include <stdio.h>
#include <stdlib.h>
#include "raizes.h"

int main() {


  float A;
  float B;
  float C;

  float *X1 = (float *) malloc(sizeof(float));
  float *X2 = (float *) malloc(sizeof(float));
  
  printf("Insert data for AX²+BX+C=0: \n");
  printf("A: ");
  scanf("%f", &A);
  printf("B: ");
  scanf("%f", &B);
  printf("C: ");
  scanf("%f", &C);

  int n_raiz = raizes(A, B, C, X1, X2);

  printf("Raízes: %d\n", n_raiz);

  if (n_raiz > 0 ) {
    printf("X1: %f\n", *X1);
    printf("X2: %f\n", *X2);
  }

  return 1;
}
