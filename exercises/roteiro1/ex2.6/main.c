#include <stdio.h>
#include "hanoi.h"

int main() {

  int n;
  printf("Digite o número de discos: ");
  scanf("%d", &n);
  printf("Para resolver a torre de Hanoi faça: \n\n");
  hanoi(n, 'A', 'C', 'B');
  printf("\n");

  return 1;
}
