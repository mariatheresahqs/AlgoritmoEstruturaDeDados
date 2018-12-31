#include <stdio.h>
#include <string.h>

int StrEnd(char *s, char *t);

int main() {
    char palavra1[50], palavra2[50];
    int flag;
    printf("Escreva duas palavras:\n");
    scanf("%s %s", &palavra1, &palavra2);
    flag = StrEnd(palavra1,palavra2);
    if(flag==0){
        printf("A segunda palavra se encontra no final da primeira.\n");
    } else{
        printf("A segunda palavra não se encontra ao final da primeira.\n");
    }
    return 0;
}

int StrEnd(char palavra1[], char palavra2[]){
    int ctr=0, tamanhoPalavra1, tamanhoPalavra2, final, flag = 0;
    tamanhoPalavra1 = (int)strlen(palavra1);//contador do tamanho de caracteres da primeira palavra
    tamanhoPalavra2 = (int)strlen(palavra2);//contador do tamanho de caracteres da segunda palavra
    //printf("%d\n", tamanhoPalavra1);
    //printf("%d\n", tamanhoPalavra2);
    final = tamanhoPalavra1 - tamanhoPalavra2;//estipulando o indice final em que o vetor tem de parar a comparacao na primeira palavra

    if(tamanhoPalavra1<tamanhoPalavra2){//se a segunda palavra for maior que a primeira ela já nao estara presente no fianl da primeira palavra
        flag = 0;
    } else {
        while (palavra1[ctr + tamanhoPalavra1] == palavra2[ctr + tamanhoPalavra2]) {//comparacao de todos os caracteres das palavras, comecando das ultimas letras
            if (palavra1[final] != palavra2[0]) {//comparacao entre os indices de parada. Caso o indice de parada da primeira palavra nao seja o indice final (zero) da segunda, entao flag é 0
                flag = 0;
            } else {//se a todos os caracteres forem iguais ate a condicao de parada, retornar o valor 1
                flag = -1;
            }
            ctr--;
        }
    }
    return flag;
}
