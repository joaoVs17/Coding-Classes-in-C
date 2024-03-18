#include <stdlib.h>
#include "vet.h"

int maior(int *vet, int tam) {

  int maior = vet[0];
  for (int i = 1; i < tam; i++) {
    if (vet[i]>maior) {
      maior = vet[i];
    }
  }

  return maior;

}

int menor(int *vet, int tam) {

  int menor = vet[0];
  for (int  i = 1; i< tam; i++) {
    if (vet[i]<menor) {
      menor = vet[i];
    } 
  }

  return menor;

} 

float media(int *vet, int tam) {
  int soma = 0;
  for (int i = 0; i<tam; i++) {
    soma += vet[i];
  }

  float media = (float)soma/tam;

  return media;
}
