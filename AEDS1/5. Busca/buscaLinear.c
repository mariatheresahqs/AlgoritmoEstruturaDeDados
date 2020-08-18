int buscaLinear(int vetor[], int tamanho, int elementoBuscado){
    int i;
    for (i=0; i<tamanho; i++)
    {
       if (vetor[i] == elementoBuscado){
           printf("Elemento encontrado.\n" );
           // retorna a posicao do elemento buscado
           return (i+1);
        }
    }
    printf("Elemento nao encontrado.\n" );
    return -1;
}
