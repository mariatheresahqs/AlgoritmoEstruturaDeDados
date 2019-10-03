#include "listaSequencial.h"

struct lista{
    int quantidade;
    Aluno dadosAlunos[MAX];
};

// CRIAR LISTA
Lista* criarLista(){
    // Cria uma variavel do tipo ponteiro para salvar um endereco na memoria
    Lista *lista;
    // Aloca na memoria dinamica (heap) o endereco alocado para a variavel de tipo Lista no ponteiro
    lista = (Lista*)malloc(sizeof(Lista));
    // Caso a alocacao tenha dado certo
    if(lista!=NULL){
        // Inicializa a variavel tamanho com o valor 0
        lista->quantidade=0;
    }
    // Retorno o endereço da lista criada
    return lista;
}

// LIBERAR LISTA
void liberarLista(Lista *lista){
    free(lista);
}

// TAMANHO DA LISTA
int tamanhoLista(Lista *lista){
    if(lista==NULL){
        return -1;
    } else{
        // Se a lista foi corretamente alocada ela retorna o tamanho da lista
        return lista->quantidade;
    }
}

// LISTA CHEIA
int listaCheia(Lista *lista){
    if(lista==NULL){
        return -1;
    }
    // Se a lista foi corretamente alocada e está cheia ela retorna o valor 1
    return  (lista->quantidade == MAX);
}

// LISTA VAZIA
int listaVazia(Lista *lista){
    if(lista==NULL){
        return -1;
    }
    // Se a lista foi corretamente alocada e seu campo quantidade é igual a 0 ela retorna o valor 1
    return (lista->quantidade==0);
}

// INSERIR ELEMENTO NA LISTA
// Insercao no Final
int inserirFinal(Lista* lista, Aluno novoAluno){
    // Confere se a lista foi corretamente alocada
    if(lista==NULL){
        return 0;
    }
    // Confere se a lista está cheia
    if(listaCheia(lista)){
        return 0;
    }
    // Caso a lista tenha sido corretamente alocada e não esteja cheia
    // O último campo vazio da lista recebe os dados do aluno
    lista->dadosAlunos[lista->quantidade] = novoAluno;
    // O tamanho da lista é incrementado
    lista->quantidade++;
    printf("Inserção realizada com sucesso!\n");
    return 1;
}

// Insercao no Inicio
int inserirInicio(Lista* lista, Aluno novoAluno){
    // Confere se a lista foi alocada corretamente
    if(lista==NULL){
        return 0;
    }
    // Confere se a lista está cheia
    if(listaCheia(lista)){
        return 0;
    }
    // Realoca todos os itens da lista uma posicao para frente
    for(int i=lista->quantidade-1;i>=0;i--){
        lista->dadosAlunos[i+1]=lista->dadosAlunos[i];
    }
    // Aloca o novo item na primeira posicao
    lista->dadosAlunos[0]=novoAluno;
    // Incrementa o tamanho da lista em um
    lista->quantidade++;
    printf("Inserção realizada com sucesso!\n");
    return 1;
}

// Insercao de forma Ordenada
int inserirOrdenado(Lista* lista, Aluno novoAluno){
    // Confere se a lista foi alocada corretamente
    if(lista==NULL){
        return 0;
    }
    // Confere se a lista está cheia
    if(listaCheia(lista)){
        return 0;
    }
    int k, i=0;
    // Enquanto a recursao for inferior ao tamanho da lista E
    // a matricula do novo aluno for superior ao do aluno está sendo comparado
    while (i<lista->quantidade && lista->dadosAlunos[i].matricula<novoAluno.matricula){
        // Incrementar mais um no indice para percorrer a lista
        i++;
    }
    // Realiza o deslocamento de todos os itens de valor superior ao novo
    // uma posicao para frente
    for(k=lista->quantidade-1; k>=i;k--){
        lista->dadosAlunos[k+1] = lista->dadosAlunos[k];
    }
    // O novo dado é inserido na posicao do primeiro valor superior ao novo encontrado na condicao while
    lista->dadosAlunos[i]=novoAluno;
    lista->quantidade++;
    printf("Inserção realizada com sucesso!\n");
    return 1;
}