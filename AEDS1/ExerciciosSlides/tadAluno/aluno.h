//
// Created by Maria Theresa Henriques on 2019-08-20.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "disciplinas.h"

#ifndef TADALUNO_ALUNO_H
#define TADALUNO_ALUNO_H
#define tamanho 2

typedef struct {
    char nome[30];
    char matricula[8];
    Disciplinas disciplinas[tamanho];
    float coeficiente;
}Aluno;

void inicializarAluno(Aluno *aluno);
void imprimirAluno(Aluno *aluno);
void preencherAluno(Aluno *aluno);
void coeficiente(Aluno *aluno);

#endif //TADALUNO_ALUNO_H
