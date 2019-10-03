#ifndef SLIDE0104_NUMEROSCOMPLEXOS_H
#define SLIDE0104_NUMEROSCOMPLEXOS_H

#include <stdio.h>
#include <stlib.h>

//definicao de tipo
typedef struct {
    int parteReal;
    int parteImaginaria;
}NumeroComplexo;

//cabeçalho das funções
void atribui(NumeroComplexo* numero);
void imprime(NumeroComplexo* numero);
void copia(NumeroComplexo* numero1,NumeroComplexo* numero2);
void soma(NumeroComplexo* numero1, NumeroComplexo* numero2);
void ehReal(NumeroComplexo* numero);

#endif //SLIDE0104_NUMEROSCOMPLEXOS_H
