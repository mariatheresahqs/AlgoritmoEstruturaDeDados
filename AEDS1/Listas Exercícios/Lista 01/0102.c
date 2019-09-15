#include <stdio.h>

int main() {
    int qntAlunos, qntProvas;

    printf("Declare o tamanho da turma: ");
    scanf("%d", &qntAlunos);

    printf("Declare a quantidade de provas aplicadas: ");
    scanf("%d", &qntProvas);

    int alunos[qntAlunos];
    float notas[qntProvas], media, listaMedias[qntAlunos];

    printf("Declare as notas das provas dos alunos: \n");
    for(int i=0; i<qntAlunos;i++){
        media=0;
        printf("Aluno %d:\n", i+1);
        for(int t=0; t<qntProvas;t++){
            printf("Nota prova %d: ", t+1);
            scanf("%f", &notas[t]);
            if(notas[t]<0){
                media =-1;
                alunos[i] = -1;
                break;
            }
            media = notas[t] + media;
        }
        if(media==-1){
            break;
        }
        media = media/ (float) qntProvas;
        listaMedias[i] = media;
    }

    printf("\nConceito final dos alunos: \n");
    for(int i=0; i<qntAlunos;i++){
        if(alunos[i]==-1){
            break;
        }
        printf("Aluno %d:\n", i+1);
        if (listaMedias[i]>=90)
            printf("Conceito A:\nParabéns!\n");
        else if(listaMedias[i]>=70 && listaMedias[i]<=89)
            printf("Conceito B:\nMuito bom!\n");
        else if(listaMedias[i]>=60 && listaMedias[i]<=69)
            printf("Conceito C:\nAprovado!\n");
        else if(listaMedias[i]>=40 && listaMedias[i]<=59)
            printf("Conceito D:\nAvaliação Final.\n");
        else if(listaMedias[i]>1 && listaMedias[i]<=39)
            printf("Conceito E:\nReprovado.\n");
        else
            printf("Conceito F:\nPéssimo!\n");
    }

    return 0;
}