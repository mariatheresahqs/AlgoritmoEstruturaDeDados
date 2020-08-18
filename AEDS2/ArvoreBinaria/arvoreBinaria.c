#include "arvoreBinaria.h"
#include <stdlib.h>

struct NO {
  int info;
  struct NO *left;
  struct NO *right;
};

// Criacao da arvore
arvBin *createArvBin() {
  arvBin *raiz = (arvBin *)malloc(sizeof(arvBin));
  if (raiz != NULL)
    *raiz = NULL;
  return raiz;
}

// Destruicao da arvore
void freeNO(struct NO *no) {
  if (no == NULL)
    return; // caso o nó aponte para mais nada
  freeNO(no->left);
  freeNO(no->right);
  free(no); // quando folha, liberar memória
  no = NULL;
};

void freeArvBin(arvBin *raiz) {
  if (raiz == NULL)
    return;      // caso já nao haja mais nós
  freeNO(*raiz); // libera cada nó
  free(raiz);    // libera raiz
}

// Checando se a arvore esta vazia
int isEmptyArvBin(arvBin *raiz) {
  // problema na criacao da arvore
  if (raiz == NULL)
    return 1;
  // ainda nao ha nenhum nó na arvore
  if (*raiz == NULL)
    return 1;
  // arvore nao esta vazia
  return 0;
}

// Checando a altura da arvore
int heightArvBin(arvBin *raiz) {
  // problema na criacao da arvore
  if (raiz == NULL)
    return 0;
  // ainda nao ha nenhum nó na arvore
  if (*raiz == NULL)
    return 0;
  int lefttHeight = heightArvBin(&((*raiz)->left));
  int rightHeight = heightArvBin(&((*raiz)->right));
  if (lefttHeight > rightHeight)
    return (lefttHeight + 1);
  return (rightHeight + 1);
}
