#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "letras.h"


char * readString(int max) {

  char *string = (char *) malloc(sizeof(char*)*max);
  fgets(string, max, stdin);
  if (string[max-1] == '\n') string[max-1] = '\0';
  return string;

}

int main() {
  
  printf("Insert a string: ");
  char *string = readString(15);
  printf("\n");
  printf("Inserted String: ");
  printString(string, 0);

  free(string);
  return 1;
}
