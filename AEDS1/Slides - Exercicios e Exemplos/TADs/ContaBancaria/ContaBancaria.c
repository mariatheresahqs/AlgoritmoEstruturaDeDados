#include "ContaBancaria.h"

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
