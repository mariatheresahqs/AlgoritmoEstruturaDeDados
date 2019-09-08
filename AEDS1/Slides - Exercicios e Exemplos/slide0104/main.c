#include <stdio.h>
#include "NumerosComplexos.h"
#include "funcoes.c"


int main() {
    NumeroComplexo numero1, numero2;
    atribui(&numero1);
    imprime(&numero1);
    ehReal(&numero1);
    printf("\n");
    atribui(&numero2);
    imprime(&numero2);
    ehReal(&numero2);
    printf("\n");
    soma(&numero1, &numero2);
    copia(&numero1, &numero2);
    return 0;
}
