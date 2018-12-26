#include <stdio.h>

void MaximoMinimo(int tamanho, int vetor[], int *maximo, int *minimo);//declaracao da funcao a ser usada com seus parametros

int main() {
    int tamanho, i;//declaracao da variavel tamanho que sera usada no vetor e da variavel indice de iteracao
    printf("Declare o tamanho do vetor:\n");
    scanf("%d", &tamanho);//declaracao do tamanho do vetor pelo usuario
    int vetor[tamanho], maximo, minimo;//declaracao da variavel vetor, variavel do valor maximo e variavel do valor minimo
    printf("Declare os valores do vetor:\n");
    for(i=0; i<tamanho;i++){
        scanf("%d", &vetor[i]);//declaracao pelo usuario dos valores do vetor
    }
    printf("O vetor declarado foi:\n");
    for(i=0; i<tamanho;i++){
        printf("%d ", vetor[i]);//exibicao dos valores declarados para o vetor
    }
    MaximoMinimo(tamanho, vetor, &maximo, &minimo);//passagem do valor tamanho do vetor, e dos enderecos das variaveis vetor, maximo e minimo
    printf("\nO valor maximo é %d, e o valor minimo é %d.\n", maximo, minimo);
    return 0;
}

void MaximoMinimo(int tamanho, int vetor[], int *maximo, int *minimo)
{
    int i;
    *maximo = vetor[0];//atribui o valor do primeiro elemento do vetor a variavel maximo
    *minimo = vetor[0];//atribui o valor do primeiro elemento do vetor a variavel minimo
    for (i=1; i<tamanho; i++){
        if (vetor[i] > *maximo){//compara os valores do vetor com o da variavel maximo
            *maximo = vetor [i];//se o valor for maior ao da variavel a variavel maximo recebe o novo valor
        }
        if (vetor[i] < *minimo){//compara os valores do vetor com o da variavel minimo
            *minimo = vetor[i];//se o valor for menor ao da variavel a variavel minimo recebe o novo valor
        }
    }
}