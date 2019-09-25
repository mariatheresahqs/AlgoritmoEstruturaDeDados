//
// Created by Maria Theresa Henriques on 9/25/19.
//

#ifndef TAD_PONTO_H
#define TAD_PONTO_H
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct ponto Ponto;

//Criar um novo ponto
Ponto* CriarPonto(float x, float y);

//Liberar ponto
void LiberarPonto(Ponto* ponto);

//Imprimir ponto
void ImprimirPonto(Ponto* ponto);

//Acessar valores de "x" e "y" de um ponto
int AcessarPonto(Ponto* ponto, float* x, float* y);

//Atribuir valores "x" e "y" a um ponto
int AtribuirPonto(Ponto* ponto, float x, float y);

//Calcular a distancia entre dois pontos
float DistanciaEntrePontos(Ponto* ponto1, Ponto* ponto2);


#endif //TAD_PONTO_H
