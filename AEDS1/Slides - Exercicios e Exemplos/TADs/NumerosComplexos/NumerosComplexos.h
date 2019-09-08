//
// Created by Maria Theresa Henriques on 12/31/18.
//

#ifndef SLIDE0104_NUMEROSCOMPLEXOS_H
#define SLIDE0104_NUMEROSCOMPLEXOS_H

#include <stdio.h>

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


void atribui(NumeroComplexo* numero){
    printf("Digite o valor inteiro do número real:\n");
    scanf("%d", &(*numero).parteReal);
    printf("Digite o valor inteiro do número imaginário:\n");
    scanf("%d", &(*numero).parteImaginaria);
}

void imprime(NumeroComplexo* numero){
    printf("%d + %di\n", (*numero).parteReal, (*numero).parteImaginaria);
}

void copia(NumeroComplexo* numero1,NumeroComplexo* numero2){
    (*numero1).parteReal = (*numero2).parteReal;
    (*numero1).parteImaginaria = (*numero2).parteImaginaria;
    printf("Os valores do segundo número foram copiados para o primeiro. O primeiro"
           " valor agora é: %d + %di.\n", (*numero1).parteReal, (*numero1).parteImaginaria);
}

void soma(NumeroComplexo* numero1, NumeroComplexo* numero2){
    NumeroComplexo soma;
    soma.parteReal = (*numero1).parteReal + (*numero2).parteReal;
    soma.parteImaginaria = (*numero1).parteImaginaria + (*numero2).parteImaginaria;
    printf("O resultado da soma é: %d + %di.\n", soma.parteReal, soma.parteImaginaria);
}

void ehReal(NumeroComplexo* numero){
    if((*numero).parteImaginaria==0){
        printf("Número digitado é um número real.\n");
    } else{
        printf("Número digitado não é um número real.\n");
    }
}

#endif //SLIDE0104_NUMEROSCOMPLEXOS_H
