#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include "raizes.h"

int equal(float a, float b, float dif) {
  return fabs(a-b) < dif;
}
int bigger(float a, float b, float dif) {
  return (a - b) > dif ;
}
int smaller(float a, float b, float dif) {
  return (b - a) > dif;
}

int raizes(float A, float B, float C, float *X1, float *X2) {

  float delta = (B*B)-(4*A*C);
  printf("Delta: %f\n", delta);

  if (equal(delta, 0, 0.1)) {
    *X1 = ((-B)+sqrtf(delta))/(2*A);
    *X2 = ((-B)-sqrtf(delta))/(2*A);
    return 1;
  } else if (bigger(delta, 0, 0.1)) {
    *X1 = ((-B)+sqrtf(delta))/(2*A);   
    *X2 = ((-B)-sqrtf(delta))/(2*A);   
    return 2;
  } else if (smaller(delta, 0, 0.1)) {
    return 0;
  } else {
    printf("Comparison didn't work\n");
  }

  return 0;
}
