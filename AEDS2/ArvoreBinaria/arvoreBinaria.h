#include <stdio.h>

typedef struct NO *arvBin;

arvBin *createArvBin();
void freeArvBin(arvBin *raiz);
int isEmptyArvBin(arvBin *raiz);
int heightArvBin(arvBin *raiz);