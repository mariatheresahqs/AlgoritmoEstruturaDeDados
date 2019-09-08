#include <stdio.h>

int main() {
    float consumoCombustivel, totalCombustivel, velocidadeMedia, distancia;
    float tempo;
    consumoCombustivel = 16;

    printf("Declare a velocidade média durante a viagem: ");
    scanf("%f", &velocidadeMedia);
    printf("Declare o tempo gasto de viagem em minutos: ");
    scanf("%f", &tempo);
    tempo = tempo/60;
    distancia = velocidadeMedia*tempo;
    totalCombustivel = distancia/consumoCombustivel;
//    printf("%.2f %.2f %.2f\n", velocidadeMedia, tempo, distancia);
    printf("Foram gastos %.2f de combustível durante a viagem.\n", totalCombustivel);
    return 0;
}