//
// Created by Maria Theresa Henriques on 2019-08-26.
//

#ifndef TADALUNO_DISCIPLINAS_H
#define TADALUNO_DISCIPLINAS_H

typedef struct {
    char nomeDisciplina[15];
    char professor[10];
    float nota;
}Disciplinas;

void inicializarDisciplinas(Disciplinas *disciplinas);
void imprimirDisciplinas(Disciplinas *disciplinas);


#endif //TADALUNO_DISCIPLINAS_H
