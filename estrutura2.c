#include <stdio.h>
#include <string.h>

struct Estidante
{
    char nome[50];
    double matricula;
    float nota1, nota2, nota3;
    float media;
};

void calcularmedia(struct Estidante *estudante)
{
    estudante->matricula = 202303771851;
    strcpy(estudante->nome, "joao vitor");
    estudante->nota1 = 9.5;
    estudante->nota2 = 8.5;
    estudante->nota3 = 5.5;
    estudante->media = (estudante->nota1 + estudante->nota2 + estudante->nota3) / 3;
}

int main()
{

    struct Estidante aluno;

    calcularmedia(&aluno);

    printf("nome do aluno:%s\n", aluno.nome);
    printf("matricula do aluno:%.0f\n", aluno.matricula);
    printf("notas:%.2f,%.2f,%.2f\n", aluno.nota1, aluno.nota2, aluno.nota3);
    printf("media do aluno:%.2f\n", aluno.media);

    return 0;
}