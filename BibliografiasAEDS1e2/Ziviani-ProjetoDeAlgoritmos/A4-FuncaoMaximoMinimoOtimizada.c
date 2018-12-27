#include <stdio.h>

void MaximoMinimo(int tamanho, int vetor[], int *maximo, int *minimo);//Declaracao da funcao e parametros para encontrar maximos e minimos de um vetor

int main() {
    int tamanho, i;//declaracao da variavel tamanho do vetor e da variavel de iteracao
    printf("Declare o tamanho do vetor:\n");
    scanf("%d", &tamanho);//armazenamento do valor da variavel tamanho
    int vetor[tamanho], maximo, minimo;//declaracao da variavel vetor com seu tamanho, e das variaveis maximo e minimo
    printf("Declare os %d valores do vetor:\n", tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d", &vetor[i]);//declaracao dos valores dos elementos do vetor
    }
    printf("Os valores declarados para o vetor são:\n");
    for(i=0;i<tamanho;i++){//passagem por iteracao em cada indice dos elementos do vetor
        printf("%d ", vetor[i]);//exibicao dos valores dos elementos do vetor
    }
    MaximoMinimo(tamanho, vetor, &maximo, &minimo);//chamada da funcao para encontrar o maximo e minimo dentre os elementos do vetor
    printf("\nO valor maximo declarado foi %d, e o valor minimo foi %d.\n", maximo, minimo);//exibicao do valor maximo e minimo do vetor
    return 0;
}

void MaximoMinimo(int tamanho, int vetor[], int *maximo, int *minimo)//passagem dos parametros do vetor
{
    int i, FimDoAnel;//declaracao da variavel de iteracao e da variavel FimDoAnel(dependente da variavel tamanho do vetor)
    if((tamanho & 1)>0){
        vetor[tamanho] = vetor[tamanho - 1];//atribui o valor do elemento vetor[tamanho - 1] ao novo elemento criado, vetor[tamanho]
        FimDoAnel = tamanho;//atribui o valor do tamanho do vetor a variavel FimDoAnel
    } else{
        FimDoAnel = tamanho - 1;
    }
    if (vetor[0]>vetor[1]){//compara os valores dos dois primeiros elementos do vetor, conferindo se o primeiro é maior que o segundo
        *maximo = vetor[0];//designa o valor do primeiro elemento ao ponteiro da variavel maximo
        *minimo = vetor[1];//designa o valor do segundo elemento ao ponteiro de variavel minimo
    } else{//caso o primeiro elemento do vetor nao seja maior que o segundo
        *maximo = vetor[1];//designa o valor do segundo valor ao ponteiro da variavel maximo
        *minimo = vetor[0];//designa o valor do primeiro valor ao ponteiro da variavel minimo
    }
    i = 3;//atribui o valor 3 a variavel de iteracao para que as buscas e comparacoes comecem de um elemento que ainda nao foi analisado
    while (i <= FimDoAnel) {//estabele iteracao ate o momento em que a variavel indice de comparacao for menor ou igual ao limite de tamanho do vetor
        if (vetor[i - 1] > vetor[i]) {//compara dois indices de elementos do vetor, indices ainda nao comparados
            if (vetor[i - 1] > *maximo) {
                *maximo = vetor[i - 1];
            }
            if (vetor[i] < *minimo) {
                *minimo = vetor[i];
            }
        } else {
            if (vetor[i - 1] < *minimo) {
                *minimo = vetor[i - 1];
            }
            if (vetor[i] > *maximo) {
                *maximo = vetor[i];
            }
        }
        i += 2;//Incrementa o indice do vetor em dois, forcando a funcao a analisar dois elementos que ainda nao foram comparados
    }
}















