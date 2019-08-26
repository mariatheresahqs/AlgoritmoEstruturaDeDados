//
// Created by Maria Theresa Henriques on 2019-08-20.
//

#include "aluno.h"

//Inicializa nome, matricula, numero de disciplinas, coeficiente matricula com vazios e zeros
void inicializar(Aluno *aluno, Notas *notas){
    strcpy(aluno->nome, "");
    strcpy(aluno->matricula, "");
    aluno->periodo = 0;
    //    Chamada para inicializaçao de notas
    inicializarNotas();
    aluno->coeficiente=0.0;
}


//Preenche com valores passados pelo usuario
void preencherInscricao(Aluno *aluno){
    printf("Declare o nome do aluno: ");
    fgets(aluno->nome, 30, stdin);
    printf("Declare a matrícula do aluno: ");
    fgets(aluno->matricula, 6, stdin);
}


//Imprime dados do aluno
void imprimirAluno(Aluno aluno){
    printf("Nome: ");
    puts(aluno.nome);
    printf("Matrícula: ");
    puts(aluno.matricula);
    //    Chamada para impressao de notas
    imprimirNotas();
    //    Chamada para impressao do coeficiente

}

//Imprime coeficiente
float imprimirCoeficiente(Notas *notas);