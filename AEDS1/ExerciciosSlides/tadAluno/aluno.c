//
// Created by Maria Theresa Henriques on 2019-08-20.
//
#import "aluno.h"

void inicializarAluno(Aluno *aluno){
    strcpy(aluno->nome, "");
    strcpy(aluno->matricula, "");
    inicializarDisciplinas(aluno->disciplinas);
    aluno->coeficiente = 0.0;
}

void imprimirAluno(Aluno *aluno){
    printf("Nome: %s\n", aluno->nome);
    printf("Matrícula: %s\n", aluno->matricula);
    imprimirDisciplinas(aluno->disciplinas);
    printf("Coeficiente: %f\n", aluno->coeficiente);

}