#include "cubo.h"
#include <stdio.h>

void inicializaCubo(Cubo * c, double lado) {

  c->lado = lado;

}

double getLado(Cubo * c) {
  
  return c->lado;

}

double getArea(Cubo * c) {

  return (c->lado*c->lado*6);

}

double getVolume(Cubo * c) {

  return (c->lado*c->lado*c->lado);

}
