#include "catalogo.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void clearBuffer() {
  int c;
  while((c=getchar()) != '\n' && c != EOF );
}
int getLength(char* str) {
  int chars = 0;
  while (str[chars] != '\0') chars++;
  return chars;
}
char* readString(int sz) {
  
  char* str = (char*)malloc(sizeof(char)*sz);
  fgets(str, sz, stdin);
  int length = getLength(str);
  if (str[length-1] == '\n') str[length-1] = '\0';
  return str;
}

int main() {

  CatalogoProdutos* c = criarCatalogo();
  
  printf("Quantos produtos deseja adicionar? ");
  int n;
  scanf("%d", &n);
  clearBuffer();
  if (n<=0) {
    printf("OKAY, Tenha um bom dia\n");
    return 1;
  }
  for (int i=0; i<n;i++) {
    printf("Produto %d: \n", i+1);
    printf("Nome: ");
    char* str = readString(50);
    printf("Preço: ");
    double preco;
    scanf("%lf", &preco);
    clearBuffer();
    printf("Quantidade: ");
    int qtd;
    scanf("%d", &qtd);
    clearBuffer();
    adicionaProdutos(c, str, preco, qtd);
    free(str);
    printf("\n");
  }

  printf("Pesquise algum nome no estoque: ");
  char* str = readString(50);
  int qtd = verificarEstoque(c, str);
  if (qtd == -1) {
    printf("Não há produtos registrados com o nome %s\n", str);
  } else {
    printf("O produto registrado com o nome \'%s\' possui %d unidades em estoque\n", str, qtd);
  }
  printf("\n");
  free(str);

  imprimirCatalogo(c);

  free(c);
  return 1;
}
