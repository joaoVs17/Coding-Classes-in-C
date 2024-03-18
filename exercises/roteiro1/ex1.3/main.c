#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"
#include <string.h>

int getLength(char *string) {
  int chars = 0;
  while (string[chars]!='\0') {
    chars++;
  }
  return chars;
}
void clearBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c!=EOF);
}
char * getString(int max_size) {
  char *string = (char *) malloc(sizeof(char)*max_size);
  fgets(string, max_size, stdin);
  int length = getLength(string);
  if (string[length-1]=='\n') string[length-1] = '\0';
  return string;
}


int main() {
  
  printf("Insert the number of students: ");
  int num;
  scanf("%d", &num);
  clearBuffer();
  fflush(stdin);
  Aluno *alunos = (Aluno *)malloc(sizeof(Aluno)*num);
  
  printf("Insert student information: \n");
  for (int i=0; i<num; i++) {
    printf("Insert student no %d data: \n", i+1);
    printf("Nome: ");
    alunos[i].nome = getString(50);
    printf("Matrícula: ");
    alunos[i].matricula = getString(10);
    printf("Nota: ");
    scanf("%f", &alunos[i].nota);
    clearBuffer();
  } 

    printf("\n");
  melhorPiorAluno(alunos, num);

  for (int i=0; i<num; i++) {
    free(alunos[i].nome);
    free(alunos[i].matricula);
  }
  free(alunos);

  return 1;
}
