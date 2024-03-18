#include "multi.h"

int produto(int n, int m, int prod) {
  
  if (n>0) {
    return produto(n-1, m, prod+m);
  }

  return prod;
} 
