#include "ponto.h"

int main() {
    float distanciaPontos, x, y;
    Ponto *ponto1, *ponto2, *ponto3;

    ponto1 = CriarPonto(100, 21);
    ponto2 = CriarPonto(7,250);
    ImprimirPonto(ponto1);
    ImprimirPonto(ponto2);
    distanciaPontos = DistanciaEntrePontos(ponto1, ponto2);
    printf("A distancia entre os pontos é: %.2f.\n", distanciaPontos);

    ponto3 = CriarPonto(8, 4);
    ImprimirPonto(ponto3);
    AtribuirPonto(ponto3, 5, 8);
    ImprimirPonto(ponto3);

    //Liberando os pontos alocados na memoria
    LiberarPonto(ponto1);
    LiberarPonto(ponto2);
    LiberarPonto(ponto3);
    return 0;
}