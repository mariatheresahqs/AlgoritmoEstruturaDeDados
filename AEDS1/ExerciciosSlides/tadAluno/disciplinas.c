//
// Created by Maria Theresa Henriques on 2019-08-26.
//

#import "aluno.h"

void inicializarDisciplinas (Disciplinas *disciplinas){
    for(int i=0; i<tamanho;i++){
        strcpy(disciplinas[i].nomeDisciplina, "");
        strcpy(disciplinas[i].professor, "");
        disciplinas[i].nota = 0.0;
    }
}

void imprimirDisciplinas(Disciplinas *disciplinas){
    for(int i=0; i<tamanho;i++){
        printf("Disciplina: %s\n", disciplinas[i].nomeDisciplina);
        printf("Professor: %s\n", disciplinas[i].professor);
        printf("Nota: %f\n", disciplinas[i].nota);
    }
}
