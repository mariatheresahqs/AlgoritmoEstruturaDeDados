## Introdução

### 1. Algoritmos, Estruturas de Dados e Programas 

* Algoritmo

Um algoritmo pode ser visto como uma sequência finita de ações executáveis, baseadas em um padrão de comportamento, para a obtenção de uma solução para um determinado tipo de problema. 

* Estrutura de Dado

Relacionamento lógico e escolha da forma de representação de um conjunto de tipos de dados.

* Programas  

Programas são formulações concretas de algoritmos abstratos, baseados em representações e estruturas específicas de dados. São, assim, representação de algoritmos capazes de serem seguidos por computadores. 

### 2. Tipos de Dados e Tipos Abstratos de Dados 

* Tipos de Dados

Um tipo de dado nada mais que é algo do mundo real que pode ser representado computacionalmente. Define os valores que um dado pode assumir e as operações que podem ser efetuadas sobre o dado. Ex.: Números, caracteres, valores booleanos.

* Tipos Abstratos de Dados (TAD)

  - Um tipo abstrato de dado pode ser visto como um modelo matemático composto de um conjunto de valores acompanhado das operações definidas sobre o modelo.      
  - São representações completas de uma abstração, generalizações de tipos primitivos, usados para criar e encapsular um novo tipo de dado. 
  - Organiza, facilita e torna mais eficientes a programação do sistema.
  - Usuário tem acesso apenas a interface do TAD. 
  - Coleção de uma ou mais variáveis, colocadas juntas sob um único nome para manipulação conveniente.

Se existe necessidade de alterar a implementação do tipo abstrato de dado, a alteraçãofica restrita à parte encapsulada, sem causar impacto em outras partes do código.

### 3. Medida do Tempo de Execução de um Programa 

Análise de algoritmos é importante para comparar a eficiência (complexidade computacional) dos algoritmos, e o custo de aplicação dos mesmos (memória + tempo).

Na área de análise de algoritmos, existem dois tipos de problemas bem distintos:

**3.1.1. Análise Empírica: comparação entre os programas**

Avalia o custo (complexidade) de um algoritmo a partir da avaliação da execução do mesmo quando implementado.

  * Vantagens:
    
    - Avalia o desempenho em uma determinada configuração de computador/linguagem;
    - Considera custos não aparentes (ex.: alocação de memória);
    - Compara computadores;
    - Compara linguagens.  
    
  * Desvantagens: 
    
    - Necessidade de implementação do algoritmo;
    - Resultado pode ser mascarado pelo hardware ou software;
    - Natureza dos dados:  
      * dados reais;
      * aleatórios (avaliam o desempenho médio);
      * perversos (pior caso).


**3.1.2. Análise Matemática: estudo das propriedades do algoritmo**  

- Estudo formal do algoritmo ao nível da ideia por trás do algoritmo.   
- Faz uso do computador idealizado e simplificações que consideram somente os custos dominantes do algoritmo.  
- Medição do tempo independente do "hardware" ou "linguagem" usada na implementação.   
- Tempo de execução de um algoritmo dependerá do quão rápido as funções dele crescem dado o tamanho da entrada.   

* Vantagens:  
  
  - Detalhes de baixo nível são ignorados (linguagem, hardware, instruções da CPU);
  - Comportamento de um algoritmo à medida que o conjunto de dados de entrada cresce. Relação conjunto de dados de entrada e tempo de processo.  

**Análise matemática do algoritmo:**  

  * Análise de um algoritmo em particular:
    - Custo de um determinado algoritmo: a quantidade de vezes que cada parte do algoritmo é executado, e a quantidade de memória necessária.
  
  * Análise de uma classe de algoritmos:
    - Visa colocar limites para a complexidade computacional dos algoritmos pertencentes à classe;
        
    > Obs.: Quando um programa é executado em um computador real:    
            - resultados dependem de um compilador que pode favorecer algumas construções em detrimento de outras;  
            - resultados dependem do hardware;   
            - as medidas de tempo podem depender da quantidade de memória utilizada.   
                  
  **Contando Instruções de um Algoritmo**
  
 - Contagem de instruções simples.
 - As instruções-operações simples possuem o mesmo "custo".
 - Comandos de seleção possuem custo zero. 
  
  Tipos de instruções:
  
  * Simples:
    - Atribuição de valor;
    - Acesso ao valor de um determinado elemento;
    - Comparação de valores;
    - Incremento de valor;
    - Operações aritméticas.
    
  * Compostas:
    - Combinações de instruções simples;
    - Instruções de controle de fluxo;
    - Soma e multiplicação de instruções simples;
  
  A complexidade de tempo na realidade não representa o tempo diretamente, mas o número de vezes que determinada operação considerada importante é executada. Já a medidade do custo de execução depende principalmente do tamanho da entrada dos dados. Em alguns algoritmos o custo de execução é uma função da entrada particular dos dados, não apenas do tamanho da entrada (ex.: ordenação).  
  
  Depois que um problema é analisado e decisões de projeto são finalizadas, é necessário estudar as várias opções de algoritmos a serem utilizados, considerando os aspectos de tempo de execução e espaço ocupado.  

   #### 3.2.Comportamento Assintótico de Funções   
   
   A notação assintótica permite descartar os termos constantes e menos significativo, assim, analisa-se o pior caso que o algoritmo pode apresentar (maior número de instruções a ser executado). Faz-se, então, a contagem dos comandos de laços aninhados.  
   
   O método descreve o comportamento de limites dos algoritmos. Busca-se conhecer a função de complexidade de tempo quando n (entrada de dados) tende ao infinito. Para isso: 
   
   - Descarta-se os termos constantes e menos significativos;  
   - Mantém-se os termos de crescimento mais rápido à medida que o n cresce;  
   - Tende-se a considerar, dependendo do tamanho da entrada de dados, apenas a variável de maior grau da função.  
   
   
   **Notações de custo**
   
   * Big O - Custo máximo:
     - Custo de tempo, ou espaço, no pior caso possível;
     - Limite superior de entrada;
     - Menor eficiência de um algoritmo.
     
   * Big Omega - Custo mínimo:
     - Custo de tempo, ou espaço, no melhor caso possível;
     - Limite inferior de entrada;
     - Maior eficiência de um algoritmo.
     
   * Big Theta - Custo aproximado:
     - Limite firme ou estreito;
     - Limite inferior e superior.
   
   #### 3.3.Classes de Comportamento Assintótico
   
   **O(1): Ordem Constante**
     - As instruções são executadas um número fixo de vezes;
     - Não depende do tamanho dos dados de entrada.
     
   **O(log(n)): Ordem Logarítmica**
     - Típica de algoritmos que resolvem um problema transformando-o em problemas menores.
     
   **O(n): Ordem Linear**
     - Uma certa quantidade de operações é realizada sobre cada um dos elementos da entrada.
     
   **O(nlong(n)): Ordem Log Linear**
     - Típica de algoritmos que trabalham com particionamento dos dados. Algoritmos que resolvem um problema transformando-o em problemas menores, que são resolvidos de forma independente e depois unidos. 
     
   **O(nˆ2): Ordem Quadrática**
     - Quando os dados são processados aos pares;
     - Aninhamento de comandos de repetição.
     
   **O(nˆ3): Ordem Cúbica**
     - Caracterizado pela presença de três estruturas de repetição aninhadas.
     
   **O(2ˆn): Ordem Exponencial**
     - Geralmente ocorre quando se usa uma solução de "força bruta";
     - Não são utéis do ponto de vista prático.
     
   **O(n!): Ordem Fatorial**
     - Geralmente ocorre quando se usa uma solução de "força bruta";
     - Possui um comportamento muito pior que o exponencial.
       
----------
### Bibliografia Complementar

**3. Medida do Tempo de Execução de um Programa**  
1. [Análise Assintótica de Algoritmos - Eduardo Mendes](https://www.youtube.com/playlist?list=PLikRnDdXnDvo1WUrumRQRaWYEvz7C3gjX)  
2. [Linguagem C Programação Descomplicada](https://www.youtube.com/playlist?list=PL8iN9FQ7_jt6buW7SBD3yzjIp8NnJYrZl)
