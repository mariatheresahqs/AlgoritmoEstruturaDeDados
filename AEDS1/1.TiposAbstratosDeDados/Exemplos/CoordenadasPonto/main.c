#include"Ponto.h"

int main(){
    float distancia;
    Ponto *ponto1, *ponto2;
    ponto1 = ponto_criar(10, 21);
    ponto2 = ponto_criar(7, 25);
    distancia = pontos_distancia(ponto1, ponto2);
    printf("A distância entre os pontos é: %.2f.\n", distancia);
    ponto_liberar(ponto1);
    ponto_liberar(ponto2);

  system("pause");
  return 0;
}
