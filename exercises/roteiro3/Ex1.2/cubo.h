#ifndef CUBO_H
#define CUBO_H

typedef struct sCubo {

  double lado;

} Cubo;

void inicializaCubo(Cubo *, double);
double getLado(Cubo *);
double getArea(Cubo *);
double getVolume(Cubo *);

#endif
