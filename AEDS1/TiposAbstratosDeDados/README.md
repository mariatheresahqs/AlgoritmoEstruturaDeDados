## Estrutura de Dados

Estruturas de dados dão suporte à descrição dos elementos funcionais passivos, complementando o algoritmo que
constitui parte da solução do problema considerado. Ambos, algoritmo e estruturas de dados, compõem o programa a ser executado pelo computador.

A estrutura de dados, então, nada mais é que a organização de dados e operações (algoritmos) que podem ser aplicadas sobre esses como forma de apoio a solução de problemas (complexos).

#### Tipos de Dados

Tipos de dados podem ser vistos como métodos para interpretar o conteúdo da memória do computador. Caracteriza o conjunto de valores a que uma constante pertence, ou que podem ser assumidos por uma variável ou expressão, ou que podem ser gerados por uma função.

*Tipos simples:* int, float, double, etc   
*Tipos estruturados:* struct  

Tipos estruturados são estruturas de dados pré-definidas na linguagem de programação. Vetores, registros, listas encadeadas, pilhas, filas, árvores, e grafos, são exemplos de estruturas de dados típicas utilizadas para armazenar informações em memória principal. 
____________________
### Tipos Abstratos de Dados - TAD

Trata-se de uma metodologia de programação que visa reduzir as informações necessárias para a criação/programação de um algoritmo através da abstração das variáveis envolvidas em uma única entidade fechada, com operações próprias à sua natureza. A abstração das informações aprimorou a construção de algoritmos, e por consequência aumentou a complexidade dos programas. 

Um tipo abstrato de dados (TAD) pode ser visto como um modelo matemático que encapsula um modelo de dados e um conjunto de procedimentos que atuam com exclusividade sobre os dados encapsulados. Em nível de abstração mais baixo, associado à implementação, esses procedimentos são implementados por subprogramas denominados operações, métodos ou serviços. 

Qualquer processamento a ser realizada sobre os dados encapsulados em um TAD só poderá ser executada por intermédio dos procedimentos definidos no modelo matemático do TAD, sendo esta restrição a característica operacional mais útil dessa estrutura.

O TAD é implementado usando-se um tipo composto (struct/record) com os valores pertencentes ao TAD (ex.: nome, conta, agencia), e por funções que operam esta estrutura. 

**Definição de um TAD**

1. Descreve-se o TAD em dois módulos separados.  
   1.1. Um módulo contém a definição: representação da estrutura de dados e implementação de cada operação suportada. É visto como uma tuple (*v,o*), em que *v* é o conjunto de valores, e *o* é o conjunto de operações aplicadas sobre esses valores.  
   1.2. Um módulo contém a interface de acesso: apresenta operações possíveis.  

2. Os módulos (ou units) são instalados em uma biblioteca e podem ser reutilizados por vários programas. A execução do programa irá exigir que os módulos sejam linkados.

**Implementação**

A implementação de um TAD implica na escolha de uma estrutura de dados para representar-lo, a qual é acessada pelas operações que ele define. Implementar, então, significa mapear a estrutura de dados e as operações em uma linguagem de programação.

Assim, a implementação de cada TAD pode ocupar porções bem definidas do programa: uma para a definição das estruturas de dados e outra para a definição do conjunto de algoritmos. Nessas condições, quaisquer alterações realizadas na estrutura de um dado TAD não afetarão as partes do programa que utilizam esse TAD.

A escolha da estrutura de dados empregada tem papel importante, uma escolha mal feita pode resultar em implementações ineficientes ou mesmo não-factíveis.

**Características de um TAD**

- Separação conceitual (conjunto de valores, conjunto de operações sobre esses valores), e a implementação (estrutura de dados específica).
- O programa só acessa o TAD por meio de suas operações (ocultamento de informações).
- Programador tem acesso a uma descrição dos valores e operações admitidos pelo TAD, mas não tem acesso à implementação.

**Vantagens do uso de TADs**

1. Reuso
2. Manutenção
3. Correção


##### Links consultados:

http://wiki.icmc.usp.br/images/f/fd/AulaTAD.pdf  
http://www.lcad.icmc.usp.br/~paulovic/aulas/ALG-I/SCC0202-aula-02-TADs.pdf  
http://www.inf.puc-rio.br/~coordicc/icc/TAD.pdf  
https://pt.wikipedia.org/wiki/Tipo_abstrato_de_dado  
