#include <stdio.h>

void MaximoMinimo(int tamanho, int vetor[], int *maximo, int *minimo);//declaracao da funcao que alocara os valores maximo e minimo do vetor

int main() {
    int tamanho, i;//declacarao da variavel tamanho e da variavel de iteracao
    printf("Declare o tamanho do vetor:\n");
    scanf("%d", &tamanho);//declaracao do valor tamanho
    int vetor[tamanho], maximo, minimo;//declaracao da variavel vetor, variavel maximo e variavel minimo
    printf("Declare os valores do vetor:\n");
    for(i=0;i<tamanho;i++){
        scanf("%d", &vetor[i]);//declaracao dos valores do vetor
    }
    MaximoMinimo(tamanho, vetor, &maximo, &minimo);//chamada da funcao
    printf("Os valores declarados para o vetor foram:\n");
    for(i=0;i<tamanho;i++){
        printf("%d ", vetor[i]);//exibicao dos valores presentes no vetor
    }
    printf("\nO maior valor do vetor é %d, e o menor valor do vetor é %d.\n", maximo, minimo);//exibicao do maior e menor valor do vetor

    return 0;
}

void MaximoMinimo(int tamanho, int vetor[], int *maximo, int *minimo)//declaracao da funcao e seus parametros
{
    int i;//declaracao da variavel de iteracao
    *maximo = vetor[0];//atribuicao do primeiro valor do vetor ao ponteiro da variavel maximo
    *minimo = vetor[0];//atribuicao do primeiro valor do vetor ao ponteiro da variavel minimo
    for(i=1;i<tamanho;i++){//variavel responsavel por analisar cada item do vetor
        if(vetor[i]>*maximo){//comparacao entre o valor do vetor e do ponteiro maximo para ver qual é maior
            *maximo = vetor[i];//atribuicao do valor do vetor ao ponteiro da variavel maximo
        } else if (vetor[i]<*minimo){//comparacao entre o valor do vetor e do ponteiro minimo para ver qual é menor
            *minimo = vetor[i];//atribuicao do valor do vetor ao ponteiro da variavel minimo
        }
    }
}