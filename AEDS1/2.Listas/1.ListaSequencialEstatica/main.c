#include "listaSequencial.h"

int main() {
    Lista *lista;
    Aluno aluno;
    int auxiliar, matricula;

    // Salva na variavel ponteiro lista o endereço da lista criada por malloc
    lista = criarLista();

    auxiliar = tamanhoLista(lista);
    if(auxiliar!=-1){
        printf("O tamanho da lista é %d.\n", auxiliar);
    }

    auxiliar = listaCheia(lista);
    if(auxiliar==1){
        printf("A lista está cheia.\n");
    } else{
        printf("A lista não está cheia.\n");
    }

    auxiliar = listaVazia(lista);
    if(auxiliar==1){
        printf("A lista está vazia.\n");
    } else{
        printf("Lista não está vazia.\n");
    }

    // INSERCAO
    auxiliar = inserirFinal(lista, aluno);
    auxiliar = inserirInicio(lista, aluno);
    auxiliar = inserirOrdenado(lista, aluno);
    // REMOCAO
    auxiliar = removerFinal(lista);
    auxiliar = removerInicio(lista);
    auxiliar = removerOrdenado(lista, matricula);


    liberarLista(lista);
    return 0;
}