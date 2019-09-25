//
// Created by Maria Theresa Henriques on 9/25/19.
//

#include "ponto.h" //inclui os protótipos

struct ponto{
    float x;
    float y;
};

//Criar um novo ponto
Ponto* CriarPonto(float x, float y){
    Ponto* ponto = (Ponto*)malloc(sizeof(Ponto));
    if(ponto!=NULL){
        ponto->x = x;
        ponto->y = y;
    }
    return ponto;
}

//Liberar ponto
void LiberarPonto(Ponto* ponto){
    free(ponto);
}

//Imprimir ponto
void ImprimirPonto(Ponto* ponto){
    printf("Os valores do ponto sao: %.2f e %.2f.\n", ponto->x, ponto->y);
}

//Acessar valores de "x" e "y" de um ponto
int AcessarPonto(Ponto* ponto, float* x, float* y){
    if(ponto == NULL){
        printf("Ponto não válido.\n");
        return 0;
    }
    *x = ponto->x;
    *y = ponto->y;
    printf("Pontos acessados com sucesso.\n");
    return 1;
}

//Atribuir valores "x" e "y" a um ponto
int AtribuirPonto(Ponto* ponto, float x, float y){
    if(ponto == NULL){
        printf("Ponto não válido.\n");
        return 0;
    }
    ponto->x = x;
    ponto->y = y;
    printf("Pontos atribuidos com sucesso.\n");
    return 1;
}

//Calcular a distancia entre dois pontos
float DistanciaEntrePontos(Ponto* ponto1, Ponto* ponto2){
    if(ponto1 == NULL || ponto2 == NULL){
        printf("Ponto não válido.\n");
        return -1;
    }
    float distanciaX = ponto1->x - ponto2->x;
    float distanciaY = ponto1->y - ponto2->y;
    return sqrt(distanciaX*distanciaX + distanciaY+distanciaY);
}