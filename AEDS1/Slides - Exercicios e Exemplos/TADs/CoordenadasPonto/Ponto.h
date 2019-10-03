#include <stdio.h>
#include <stdlib.h>

//Arquivo Ponto.h
typedef struct ponto Ponto;

//Criar um novo ponto
Ponto* ponto_criar(float x, float y);

//Liberar um ponto
void ponto_liberar(Ponto* p);

//Acessar os valores "x" e "y" de um ponto
void ponto_acessar(Ponto* p, float* x, float* y);

//Atribuir os valores "x" e "y" a um ponto
void ponto_atribuir(Ponto* p, float x, float y);

//Calcular a distância entre dois pontos
float pontos_distancia(Ponto* p1, Ponto*p2);
