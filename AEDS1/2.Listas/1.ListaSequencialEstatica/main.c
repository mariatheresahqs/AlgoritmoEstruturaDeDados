#include "listaSequencial.h"

int main() {
    Lista *lista;
    Aluno dadosAluno;
    int retorno, inserir;

    // Salva na variavel ponteiro lista o endereço da lista criada por malloc
    lista = criarLista();

    retorno = tamanhoLista(lista);
    if(retorno!=-1){
        printf("O tamanho da lista é %d.\n", retorno);
    }

    retorno = listaCheia(lista);
    if(retorno==1){
        printf("A lista está cheia.\n");
    } else{
        printf("A lista não está cheia.\n");
    }

    retorno = listaVazia(lista);
    if(retorno==1){
        printf("A lista está vazia.\n");
    } else{
        printf("Lista não está vazia.\n");
    }

    printf("Insira os dados do aluno:\n");
    inserir = inserirFinal(lista, dadosAluno);
    inserir = inserirInicio(lista, dadosAluno);
    inserir = inserirOrdenado(lista, dadosAluno);

    liberarLista(lista);
    return 0;
}