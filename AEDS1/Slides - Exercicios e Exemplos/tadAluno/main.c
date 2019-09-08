#include "aluno.h"

int main() {

    Aluno aluno;

    inicializarAluno(&aluno);
    imprimirAluno(&aluno);

    preencherAluno(&aluno);
    imprimirAluno(&aluno);

    return 0;
}