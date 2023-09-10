#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//Este código permite que você crie uma lista de cursos e uma lista de alunos, 
//associando cada aluno a um curso pelo ID do curso. Certifique-se de que o ID do curso fornecido pelos usuários 
//seja válido (entre 0 e num_cursos - 1). Você pode expandir esse código para criar uma estrutura de dados mais complexa, 
//como uma lista encadeada de alunos associados a cursos, se necessário.
struct Aluno {
    int Ra;
    char nome[50];
    int data;
    int curso_id; 
};

struct Curso {
    char nome[50];
    int duracao;
};

int main() {
    setlocale(LC_ALL,"portuguesa");
    int num_alunos, num_cursos;

    printf("Informe o número de cursos:\n ");
    scanf("%d", &num_cursos);

    struct Curso cursos[num_cursos];

    for (int i = 0; i < num_cursos; i++) {
        printf("Informe o nome do curso %d\n: ", i + 1);
        scanf("%s", cursos[i].nome);

        printf("Informe a duração do curso %d (em meses)\n: ", i + 1);
        scanf("%d", &cursos[i].duracao);
    }

    printf("Informe o número de alunos\n: ");
    scanf("%d", &num_alunos);

    struct Aluno alunos[num_alunos];

    for (int i = 0; i < num_alunos; i++) {
        printf("Informe o RA do aluno %d\n: ", i + 1);
        scanf("%d", &alunos[i].Ra);

        printf("Informe o nome do aluno %d\n: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Informe a data da matrícula do aluno %d\n: ", i + 1);
        scanf("%d", &alunos[i].data);

        printf("Informe o ID do curso ao qual o aluno %d está associado\n: ", i + 1);
        scanf("%d", &alunos[i].curso_id);

        
        if (alunos[i].curso_id < 0 || alunos[i].curso_id >= num_cursos) {
            printf("ID de curso inválido.\n");
            return 1; 
        }
    }

   
    return 0;
}













