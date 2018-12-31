//
// Created by Maria Theresa Henriques on 12/31/18.
//

#include <stdio.h>
#include "ContaBancaria.h"

int main (int argc, char** argv){
    ContaBancaria conta1;
    Inicializa(&conta1, 201901, 1500.00);
    printf("\nAntes da movimentacao:\n");
    Imprime(&conta1);
    Deposito(&conta1, 500.00);
    Saque(&conta1, 150.00);
    printf("\nDepois da movimentacao:\n");
    Imprime(&conta1);
    return 0;
}
