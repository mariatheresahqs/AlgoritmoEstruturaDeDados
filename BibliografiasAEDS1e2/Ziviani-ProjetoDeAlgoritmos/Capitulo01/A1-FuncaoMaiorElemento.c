#include <stdio.h>

int Maximo(int tamanho, int vetor[]);//declaracao da funcao para encontrar o valor maximo com passagem de parametros

int main() {
    int tamanho, i;//declaracao da variavel tamanho e de iteracao
    printf("Declare o tamanho do vetor:\n");
    scanf("%d", &tamanho);//declaracao do valor da variavel tamanho pelo usuario
    int vetor[tamanho], maior;//declaracao da variavel vetor e variavel maior
    printf("Declare os valores do vetor:\n");
    for(i=0;i<tamanho;i++){
        scanf("%d", &vetor[i]);//declaracao dos valores do vetor
    }
    maior = Maximo(tamanho, vetor);//chamada da funcao
    printf("Os valores declarados para o vetor foram:\n");
    for(i=0;i<tamanho;i++){
        printf("%d ", vetor[i]);
    }
    printf("\nO maior valor declarado foi: %d.\n", maior);
    return 0;
}

int Maximo(int tamanho, int vetor[])//funcao maximo para encontrar o maior valor da funcao
{
    int maior, i;//declaracao das variaveis maior e de iteracao
    maior = vetor[0];//atribuicao do primeiro valor do vetor a variavel maior
    for(i=1;i<tamanho;i++){
        if(maior < vetor[i]){//comparacao dos valores do vetor com o valor da variavel maior
            maior = vetor[i];//um novo valor, superior ao da variavel maior, é atribuido a variavel maior
        }
    }
    return maior;//retorno do valor da variavel maior como resultado da funcao Maximo
}