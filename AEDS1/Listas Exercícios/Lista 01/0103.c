#include <stdio.h>

int main() {
   float idade, media, maior, menor, contador;
   contador = media = maior = 0;
   menor =1000;

   printf("Declare as idades:\n");
   while(1){
       scanf("%f", &idade);
       if(idade<0){
           break;
       }
       if(idade>maior){
           maior = idade;
       }
       if(idade<menor){
           menor=idade;
       }
       media+=idade;
       contador++;
   }
   media = media/contador;
   printf("A maior idade declarada foi %.2f.\n", maior);
   printf("A menor idade declarada foi %.2f.\n", menor);
   printf("A média das idades declaradas é %.2f.\n", media);

    return 0;
}