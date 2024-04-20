#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
  
  Pilha* p = inicializaPilha();
  int op1, op2, num;
  char ch; 
  while(scanf("%c", &ch) != EOF) {
    switch(ch) {
      case '\0':
        return -1;
        break;
      case '\n':
        scanf("%c", &ch);
        break;
      case ' ':
        scanf("%c", &ch);
        break;
      case '\t':
        scanf("%c", &ch);
        break;
      case '+':
        if (!(desempilha(p, &op2)) || !desempilha(p, &op1)) {
          printf("Sintaxe incorreta. São necessários 2 valores em uma soma\n");
          return -1;
        }
        empilha(p, op1+op2);
        break;
      case '-':
        if (!desempilha(p, &op2) || !desempilha(p, &op1)) {
          printf("Sintaxe incorreta. São necessários 2 valores em uma subtração\n");
          return -1;
        }
        empilha(p, op1-op2);
        break;
      case '*':
        if (!desempilha(p, &op2) || !desempilha(p, &op1)) {
          printf("Sintaxe incorreta. São necessários 2 valores em uma multiplicação\n");
          return -1;
        }
        empilha(p, op1*op2);
        break;
      case '/':
        if (!desempilha(p, &op2) || !desempilha(p, &op1)) {
          printf("Sintaxe incorreta. São necessários 2 valores em uma divisão\n");
          return -1;
        }
        empilha(p, op1/op2);
        break;
      default:
        num = ch - '0';
        empilha(p, num);
        break;
    }

    //printf("%c\n", ch);

  }
  printf("\n");

  if (tamanho(p) == 1) {
    desempilha(p, &num);
    printf("Resultado: %d\n", num);
  } else {
    printf("Sintaxe incorreta: resta mais que um valor\n");
  }

  free (p->topo);
  free (p);
  return 0;
}
