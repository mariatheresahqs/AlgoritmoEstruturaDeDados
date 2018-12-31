#ifndef CONTABANCARIA_LIBRARY_H
#define CONTABANCARIA_LIBRARY_H
#include <stdio.h>

//definicao de tipo
typedef struct{
    int numero;
    double saldo;
}ContaBancaria;

//cabeçalho das funções
void Inicializa (ContaBancaria *conta, int numero, double saldo);
void Deposito (ContaBancaria *conta, double valor);
void Saque (ContaBancaria *conta, double valor);
void Imprime (ContaBancaria *conta);

void Inicializa(ContaBancaria *conta, int numero, double saldo) {
    (*conta).numero = numero;
    (*conta).saldo = saldo;
}

void Deposito(ContaBancaria *conta, double valor){
    (*conta).saldo += valor;
}

void Saque(ContaBancaria *conta, double valor){
    (*conta).saldo -= valor;
}

void Imprime (ContaBancaria *conta){
    printf("Numero: %d\n", (*conta).numero);
    printf("Saldo: %.2f\n", (*conta).saldo);
}

#endif