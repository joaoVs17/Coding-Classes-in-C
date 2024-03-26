#include "banco.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

ContaBancaria* criarConta(int numero, char *titular) {

  ContaBancaria* c = (ContaBancaria*)malloc(sizeof(ContaBancaria));

  c->numero_conta = numero;
  c->saldo = 0;
  strcpy(c->nome_titular, titular);

  return c;
}

void depositar(ContaBancaria *c, double valor) {
  
  c->saldo += valor;

}

void sacar(ContaBancaria *c, double valor) {

  if (c->saldo-valor > 0.0099) {
    c->saldo -= valor;
  }

}

void consultarSaldo(ContaBancaria * c) {

  printf("Conta de %s. Saldo atual: %lf\n", c->nome_titular, c-> saldo);

}

void imprimirInfo(ContaBancaria *c) {

  printf("===========================\n");
  printf("Conta - %d\n\n", c->numero_conta);
  printf("Titular: %s\n", c->nome_titular);
  printf("Saldo: R$%.2lf\n", c->saldo);
  printf("===========================\n");

}
