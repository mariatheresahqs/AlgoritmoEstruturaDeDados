//
// Created by Maria Theresa Henriques on 2019-08-26.
//

#import "aluno.h"

void inicializarDisciplinas (Disciplinas *disciplinas){
    for(int i=0; i<tamanho;i++){
        strcpy(disciplinas[i].nomeDisciplina, "");
        strcpy(disciplinas[i].professor, "");
        disciplinas[i].nota = 0;
    }
}

void imprimirDisciplinas(Disciplinas *disciplinas){
    for(int i=0; i<tamanho;i++){
        printf("Disciplina nº%d: %s", (i+1), disciplinas[i].nomeDisciplina);
        printf("Professor: %s", disciplinas[i].professor);
        printf("Nota: %.2f\n", disciplinas[i].nota);
    }
}


void preencherDisciplinas(Disciplinas *disciplinas){
    for(int i=0; i<tamanho;i++){
        printf("Disciplina nº%d: ", (i+1));
        fgets(disciplinas[i].nomeDisciplina, 15, stdin);
        printf("Professor: ");
        fgets(disciplinas[i].professor, 10, stdin);
        printf("Nota: ");
//        REFERENCIAR O ENDEREÇO COM SCANF
        scanf("%f", &disciplinas[i].nota);
        getchar();
    }
}


void calcularCoeficiente(Disciplinas *disciplinas){
    float coeficiente = 0;
    for(int i=0; i<tamanho;i++){
        coeficiente += disciplinas[i].nota;
    }
    coeficiente = coeficiente/tamanho;
    printf("%.2f.\n", coeficiente);
}

