#include <stdio.h>
#include "vetor.h"

void fillVet(int *vet, int sz, int st) {

  if (st < sz) {
    printf("Value for array position no %d: ", st+1);
    scanf("%d", &vet[st]);
    fillVet(vet, sz, st+1);
  }

}

void printUp(int *vet, int sz, int st) {
  
  if (st<sz) {
    
    printf("%d.. ", vet[st]);
    printUp(vet, sz, st+1);

  }

}

void printDown(int *vet, int sz) {
  if (sz > 0) {
    printf("%d.. ", vet[sz-1]);
    printDown(vet, sz-1);
  }
}
