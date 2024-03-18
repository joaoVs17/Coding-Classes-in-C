#include "counter.h"
#include <stdio.h>

void countingUp(int n) {

  if (n<=5) {
    printf("%d.. ", n);
    countingUp(n+1);
  }

}

void countingDown(int n) {


  if (n>0) {
    printf("%d.. ", n);
    countingDown(n-1);
  }

}
