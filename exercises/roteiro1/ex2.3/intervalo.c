#include "intervalo.h"

int somaIntervalo(int max, int min, int soma) {

  if (max >= min) {
    return somaIntervalo(max-1, min, (soma+max));
  }

  return soma;

}
