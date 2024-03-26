#ifndef BANCO_H
#define BANCO_H

typedef struct sContaBancaria{
  int numero_conta;
  char nome_titular[50];
  double saldo;
} ContaBancaria;

ContaBancaria* criarConta(int , char*);

void depositar(ContaBancaria*, double);

void sacar(ContaBancaria*, double);

void consultarSaldo(ContaBancaria*);

void imprimirInfo(ContaBancaria*);

#endif
