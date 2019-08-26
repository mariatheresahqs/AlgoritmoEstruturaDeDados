//
// Created by Maria Theresa Henriques on 2019-08-26.
//

#ifndef TADALUNO_NOTAS_H
#define TADALUNO_NOTAS_H

typedef struct {
    float notaDiciplina;
}Notas;

void inicializarNotas(Notas *notas);
void preencherNotas(Notas *notas);
void alterarNotas(Notas *notas);
void imprimirNotas(Notas *notas);
float calcularCoeficiente(Notas *notas);

#endif //TADALUNO_NOTAS_H
