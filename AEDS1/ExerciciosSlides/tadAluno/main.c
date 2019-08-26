#include "aluno.h"

int main() {

    Aluno alunoX;
    Notas notasX[6];

//    Inicializar os dados e notas
    inicializar(&alunoX);
    imprimirAluno(alunoX);

//    Preencher dados de inscricao
    preencherInscricao(&alunoX);
    imprimirAluno(alunoX);

//    Preencher notas
    preencherNotas();
    imprimirNotas();

//    Alterar notas
    alterarNotas();
    imprimirNotas();

//    Cacular coeficiente
    calcularCoeficiente();
    imprimirCoeficiente();

//    Imprimir aluno matriculado e com notas
    imprimirAluno();

    return 0;
}