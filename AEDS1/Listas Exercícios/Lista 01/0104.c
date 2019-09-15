#include <stdio.h>

int main() {
    int anoPassado[12], anoPresente[12], comparativo;
    comparativo=0;

    printf("Declare o indice de chuvas por mês do ano anterior:\n");
    for(int i=0;i<12;i++){
        printf("Mês %d: ", i+1);
        scanf("%d", &anoPassado[i]);
    }

    printf("Declare o indice de chuvas por mês do ano presente:\n");
    for(int i=0;i<12;i++){
        printf("Mês %d: ", i+1);
        scanf("%d", &anoPresente[i]);
    }

    for(int i=0; i<12;i++){
        comparativo = anoPresente[i] - anoPassado[i] + comparativo;
//        printf("comparativo %d\n", comparativo);
    }

    if(comparativo>0)
        printf("A média de chuva do ano passado com o presente está AUMENTANDO.\n");
    else if(comparativo<0)
        printf("A média de chuva do ano passado com o presente está DIMINUINDO.\n");
    return 0;
}