#include <stdio.h>
#include <math.h>

void funcaoQuadraticaRaizes (int termo1,int termo2, int termo3, double *raiz1, double *raiz2, int *flag);

int main() {
    int termoQuadratico, termoLinear, constante, flag=0;
    double raiz1=0.0, raiz2=0.0;
    printf("Declare os valores que multiplicam cada termo da equação,\n"
           "comecando pelo termo quadratico, seguido do linear e a constante:\n");
    scanf("%d %d %d", &termoQuadratico, &termoLinear, &constante);

    funcaoQuadraticaRaizes(termoQuadratico, termoLinear, constante, &raiz1, &raiz2, &flag);

    if( flag ==1 ){
        printf("Não existem raizes reais.\n");
    } else{
        printf("As raizes da função são %.1lf e %.1lf.\n", raiz1, raiz2);
    }
    return 0;
}

void funcaoQuadraticaRaizes (int termo1,int termo2, int termo3, double *raiz1, double *raiz2, int *flag){
    double delta;

    delta = termo2*termo2 - (4*termo1*termo3);

    if (delta<0){
        *flag = 1;
    } else{
        *raiz1 = (-termo2 - sqrt(delta))/(2*termo1);
        *raiz2 = (-termo2 + sqrt(delta))/(2*termo1);
    }

}