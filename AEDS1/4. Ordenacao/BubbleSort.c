//  Bubble sort - O(nˆ2)
void bubbleSort(int vetor[], int tamanho)
{
   int i, j, auxiliar;
   for (i = 0; i < tamanho-1; i++)
   // A cada iteracao do primeiro laco (i), faz-se uma comaparacao a menos no segundo laco (tamanho-i-1)
   // visto que o maior elemento já foi posto na ultima posição
       for (j = 0; j < tamanho-i-1; j++)
           if (vetor[j] > vetor[j+1])
              auxiliar = vetor[j];
              vetor[j] = vetor[j+1];
              vetor[j+1] = auxiliar;
}
