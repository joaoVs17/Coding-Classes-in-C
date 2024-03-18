#include <stdlib.h>
#include "aluno.h" 
#include <stdio.h>

void melhorPiorAluno(Aluno *alunos, int tam) {

  int melhorAlunoIndex = 0;
  int piorAlunoIndex = 0;
  for (int i=1; i<tam; i++) {
    if (alunos[i].nota > alunos[melhorAlunoIndex].nota) {
      melhorAlunoIndex = i;
    }
    if (alunos[i].nota < alunos[piorAlunoIndex].nota) {
      piorAlunoIndex = i;
    }
  }

  printf("Melhor aluno: \n"); 
  printf("Nome: %s\n", alunos[melhorAlunoIndex].nome);
  printf("Matrícula: %s\n", alunos[melhorAlunoIndex].matricula);
  printf("Nota: %f\n", alunos[melhorAlunoIndex].nota);
  printf("\n");
  printf("Pior Aluno: \n");
  printf("Nome: %s\n", alunos[piorAlunoIndex].nome);
  printf("Matrícula: %s\n", alunos[piorAlunoIndex].matricula);
  printf("Nota: %f\n", alunos[piorAlunoIndex].nota);

};
