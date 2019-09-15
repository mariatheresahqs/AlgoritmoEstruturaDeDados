#include <stdio.h>

int main() {
    int tamanho, comparadorMatriz=-1;
    printf("Declare o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho];

    for(int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            if(matriz[i][i]!=1 || (i!=j && matriz[i][j]!=0)){
                printf("A matriz declarada NAO é uma matriz identidade.\n");
                comparadorMatriz =0;
                break;
            }
        }
        if(comparadorMatriz==0){
            break;
        }
    }

    if(comparadorMatriz ==-1){
        printf("A matriz declarada é uma matriz identidade.\n");
    }
    return 0;
}