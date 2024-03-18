#include "intervalo.h"
#include <stdio.h>

int main() {

  int min=0, max=0;

  printf("Set an interval: \n");
  printf("From: ");
  scanf("%d", &min);
  printf("To: ");
  scanf("%d", &max);


  printf("Sum from %d to %d: \n", min, max);
  int soma = somaIntervalo(max, min, 0);

  printf("Soma: %d\n", soma);

  return 1;
}
