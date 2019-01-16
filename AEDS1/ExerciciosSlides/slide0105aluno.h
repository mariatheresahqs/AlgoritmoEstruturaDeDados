//
// Created by Maria Theresa Henriques on 1/2/19.
//

#ifndef SLIDE0105_ALUNOS_H
#define SLIDE0105_ALUNOS_H

#include <stdio.h>
#include <string.h>


//definicao de tipo
typedef struct {
    int ano;
    int curso;
    int numeroInscricao;
}Matricula;

//definicao de tipo
typedef struct{
    char nome[50];
    int idade;
    Matricula matricula;
}DadosAluno;


//Cabeçalho de funçoes
void inserirAluno(DadosAluno *aluno, char *nome, int idade, int ano, int curso, int numeroInscricao);
void imprimirAluno(DadosAluno *aluno);


#endif //SLIDE0105_ALUNOS_H
