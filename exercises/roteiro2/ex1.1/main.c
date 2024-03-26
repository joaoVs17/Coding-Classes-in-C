#include "banco.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getLength(char* str) {

  int chars = 0;
  while (str[chars] != '\0') {
    chars++;
  }
  return chars;
}
void clearBuffer() {
  int c;
  while ((c=getchar()) != '\n' && c!=EOF);
}

char* readStr(int sz) {

  char* str = (char*)malloc(sizeof(char)*sz);

  fgets(str, sz, stdin);
  int length = getLength(str);
  if (str[length-1] == '\n') str[length-1] = '\0';

  return str;

}

int main() {

  printf("Insert Your Name: ");
  char* str = readStr(50);
  
  int code = rand()%1000;

  ContaBancaria* c = criarConta(code, str);
  free(str);

  imprimirInfo(c);

  double money;

  printf("Store some Money: ");
  scanf("%lf", &money);
  depositar(c, money);  
  imprimirInfo(c);

  printf("Take some Money: ");
  scanf("%lf", &money);
  sacar(c, money);
  consultarSaldo(c);

  imprimirInfo(c);

  free(c);

  return 1;
}
