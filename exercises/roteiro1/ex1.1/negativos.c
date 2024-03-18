#include "negativos.h"
#include <math.h>

int negativos(float *vet, int n) {
  int neg=0;
  for (int i=0; i<n; i++) {
    if (vet[i] < 0) {
      neg++;
    };
  }
  return neg;
}
