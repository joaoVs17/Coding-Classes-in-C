#ifndef ALUNO_H
#define ALUNO_H

typedef struct sAluno {
  char *nome;
  char *matricula;
  float nota;
} Aluno;

void melhorPiorAluno(Aluno *aluno, int tam);


#endif
