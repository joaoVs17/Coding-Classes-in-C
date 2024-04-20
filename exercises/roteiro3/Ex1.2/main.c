#include "cubo.h"
#include <stdio.h>

int main() {

  printf("Digite um lado para um cubo: ");
  double lado;
  scanf("%lf", &lado);
  
  Cubo c;
  inicializaCubo(&c, lado);

  printf("Medida do lado: %.6lf\n", getLado(&c));
  printf("Área da superfície: %.6lf\n", getArea(&c));
  printf("Volume do cubo: %.6lf\n", getVolume(&c));

  return 0;
}
