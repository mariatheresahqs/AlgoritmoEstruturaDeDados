//Arquivo Ponto.c
#include<stdio.h>
#include<math.h>
#include"Ponto.h" //inclui os protótipos-biblioteca criados
//As aspas são usadas para definir que a biblioteca é local, e não do sistema

//Definicao do tipo de dados
struct Ponto{
  float valor1;
  float valor2;
}

//Aloca e retorna um ponto com coordenadas "x" e "y"
Ponto* ponto_criar(float valor1, float valor2){
      Ponto* ponto= (Ponto*) malloc(sizeof(Ponto));//malloc é responsável por alocar espaço na memória
      if(ponto!=NULL){
            ponto->valor1 = valor1;
            ponto->valor2 = valor2;
      }
      return ponto;
}
//Libera a memória alocada para um ponto
void ponto_liberar(Ponto* ponto){
      free(ponto);
}
//Recupera, por referência, o valor de um ponto
void ponto_acessar(Ponto* ponto, float* valor1, float* valor2){
      valor1 = ponto ->valor1;
      valor2 = ponto->valor2;
}
//Atribuir a um ponto as coordenadas "x" e "y"
void ponto_atribuir(Ponto* ponto, float x, float y){
      ponto->valor1 = x;
      ponto->valor2 = y;
}
//Calcular a distância entre dois pontos
float pontos_distancia(Ponto* ponto1, Ponto* ponto2){
      float distanciaX = ponto1->valor1 - ponto2->valor1;
      float distanciaY = ponto1->valor1 - ponto2->valor2;
      return sqrt(distanciaX*distanciaX + distanciaY*distanciaY);
}


int main(){
    float distancia;
    Ponto *ponto1, *ponto2;
    ponto1 = ponto_criar(10, 21);
    ponto2 = ponto_criar(7, 25);
    distancia = pontos_distancia(ponto1, ponto2);
    printf("A distância entre os pontos é: %.2f.\n", distancia);
    ponto_liberar(ponto1);
    ponto_liberar(ponto2);

  system("pause");
  return 0;
}
