//
// Created by Maria Theresa Henriques on 2019-08-20.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notas.h"

#ifndef TADALUNO_ALUNO_H
#define TADALUNO_ALUNO_H

typedef struct {
    char nome[30];
    char matricula[6];
    unsigned int periodo;
    Notas *notas[6];
    float coeficiente;
}Aluno;



//Inicializar nome, matricula, numero de disciplinas, coeficiente matricula com vazios e zeros
void inicializar(Aluno *aluno, Notas *notas);

//Preencher com valores passados pelo usuario
void preencherInscricao(Aluno *aluno);

//Imprimir dados do aluno
void imprimirAluno(Aluno aluno, Notas notas);

//Imprimir coeficiente
float imprimirCoeficiente(Notas *notas);


#endif //TADALUNO_ALUNO_H
