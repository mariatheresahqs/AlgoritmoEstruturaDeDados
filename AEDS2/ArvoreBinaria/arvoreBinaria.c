#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

struct NO
{
    int info;
    struct NO *esq;
    struct NO *dir;
};

// Criacao da arvore
arvBin *criarArvBin()
{
    arvBin *raiz = (arvBin *)malloc(sizeof(arvBin));
    if (raiz != NULL)
        *raiz = NULL;
    return raiz;
}

// Destruicao da arvore
void liberaNO(struct NO *no)
{
    if (no == NULL)
        return; // caso o nó aponte para mais nada
    liberaNO(no->esq);
    liberaNO(no->dir);
    free(no); // quando folha, liberar memória
    no = NULL;
};

void liberaArvBin(arvBin *raiz)
{
    if (raiz == NULL)
        return;      // caso já nao haja mais nós
    liberaNO(*raiz); // libera cada nó
    free(raiz);      // libera raiz
}
