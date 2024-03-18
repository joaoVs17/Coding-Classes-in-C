#include "letras.h"
#include <stdio.h>

void printString(char *string, int n) {

  if (string[n] != '\0') {
    printf("%c", string[n]);
    printString(string, n+1);
  }


}
