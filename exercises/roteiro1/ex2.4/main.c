#include "multi.h"
#include <stdio.h>

int main() {

  int A, B;
  printf("Insert two integer numbers: \n");
  printf("A: ");
  scanf("%d", &A);
  printf("B: ");
  scanf("%d", &B);

  int prod = produto(A, B, 0);

  printf("A x B = %d\n", prod);

  return 1;
}
