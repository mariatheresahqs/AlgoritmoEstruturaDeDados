//
// Created by Maria Theresa Henriques on 10/1/19.
//

#ifndef LISTAESTATICA_LISTASEQUENCIAL_H
#define LISTAESTATICA_LISTASEQUENCIAL_H
#define MAX 100
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
}Aluno;

typedef struct lista Lista;

// FUNCOES

// CRIAR LISTA
Lista* criarLista();

// LIBERAR LISTA
void liberarLista(Lista *lista);

// TAMANHO DA LISTA
int tamanhoLista(Lista *lista);

// LISTA CHEIA
int listaCheia(Lista *lista);

// LISTA VAZIA
int listaVazia(Lista *lista);

// INSERCAO
// Insercao no Final
int inserirFinal(Lista* lista, Aluno novoAluno);

// Insercao no Inicio
int inserirInicio(Lista* lista, Aluno novoAluno);

// Insercao de forma Ordenada
int inserirOrdenado(Lista* lista, Aluno novoAluno);

// REMOCAO
// Insercao no Final
int removerFinal(Lista* lista);

// Insercao no Inicio
int removerInicio(Lista* lista);

// Insercao de forma Ordenada
int removerOrdenado(Lista* lista, int matricula);

#endif //LISTAESTATICA_LISTASEQUENCIAL_H
