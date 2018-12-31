#include <stdio.h>

int zerarVariaveis (int *variavel1, int *variavel2);

int main() {
    int variavel1, variavel2;
    printf("Declare dois valores:\n");
    scanf("%d %d", &variavel1, &variavel2);
    zerarVariaveis(&variavel1, &variavel2);
    printf("\nOs valores declarados após retornarem da funcao \n"
           "zerarVariaveis:\n\nvariavel1 = %d \nvariavel2 = %d\n", variavel1, variavel2);
    return 0;
}

int zerarVariaveis (int *variavel1, int *variavel2){
    return *variavel1 = 0, *variavel2 = 0;
}