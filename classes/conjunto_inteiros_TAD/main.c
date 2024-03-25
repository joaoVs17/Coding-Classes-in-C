#include "conjunto.h"
#include <stdlib.h>

int main(void) {
  ConjuntoInteiros* c = criaConjuntoVazio();

  listar(c);
  insereInteiro(c, 1);
  listar(c);
  insereInteiro(c, 2);
  listar(c);
  insereInteiro(c, 3);
  listar(c);

  destroi(c);
  listar(c);

  free(c);
}
