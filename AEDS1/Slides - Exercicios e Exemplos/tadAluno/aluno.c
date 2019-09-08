//
// Created by Maria Theresa Henriques on 2019-08-20.
//
#import "aluno.h"

void inicializarAluno(Aluno *aluno){
    strcpy(aluno->nome, "");
    strcpy(aluno->matricula, "");
    inicializarDisciplinas(aluno->disciplinas);
    aluno->coeficiente = 0;
}

void imprimirAluno(Aluno *aluno){
    printf("\nNome: %s", aluno->nome);
    printf("Matrícula: %s", aluno->matricula);
    printf("Histórico de disciplinas:\n");
    imprimirDisciplinas(aluno->disciplinas);
    printf("Coeficiente: ");
    calcularCoeficiente(aluno->disciplinas);
}

void preencherAluno(Aluno *aluno){
    printf("Declare o nome do aluno: ");
    fgets(aluno->nome, 30, stdin);
    printf("Declare a matrícula do aluno: ");
    fgets(aluno->matricula, 8, stdin);
    preencherDisciplinas(aluno->disciplinas);
}

void coeficiente(Aluno *aluno){
    printf("O coeficiente do aluno é: ");
    calcularCoeficiente(aluno->disciplinas);
}