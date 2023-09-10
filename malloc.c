#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// Definindo uma estrutura Aluno
typedef struct
{
    char nome[100];
    int idade;
    double nota;
} Aluno;

int main()
{
    setlocale(LC_ALL,"portuguese");
    // Alocando dinamicamente um inteiro
    int *p = (int *)malloc(sizeof(int));
    if (p == NULL)
    {
        printf("Não foi possível alocar memória!\n");
        return 1;
    }
    *p = 42;
    printf("O número alocado é: %d\n", *p);
    free(p);
     printf("\n//--------------------------------------------------------//\n");
    // Declarando e inicializando um aluno
    Aluno aluno;
    printf("Informe o nome do estudante: \n");
    scanf("%[^\n]", aluno.nome);
    printf("Informe a idade do estudante: \n");
    scanf("%d", &aluno.idade);
    printf("Informe a nota do estudante: \n");
    scanf("%lf", &aluno.nota);
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2lf\n", aluno.nota);

    // Alocando dinamicamente outro aluno e inicializando seus campos
    Aluno *aluno2 = (Aluno *)malloc(sizeof(Aluno));
    if (aluno2 == NULL)
    {
        printf("Não foi possível alocar memória!\n");
        return 1;
    }
     printf("\n//--------------------------------------------------------//\n");
    strcpy(aluno2->nome, "Carlos Alberto");
    aluno2->idade = 18;
    aluno2->nota = 8.78;
    printf("NOME: %s\n", aluno2->nome);
    printf("IDADE: %d\n", aluno2->idade);
    printf("NOTA: %.2lf\n", aluno2->nota);
    free(aluno2);
     printf("\n//--------------------------------------------------------//\n");
    // Definindo uma estrutura Curso que contém um nome e um array de Aluno
    typedef struct
    {
        char nome[100];
        Aluno aluno3[5];
    } Curso;

    // Declarando um curso
    Curso curso1;

    strcpy(curso1.nome, "Sistemas de informação.");
    
    // Preenchendo informações de até 3 alunos para o curso
    for (int i = 0; i < 3; i++)
    {
        getchar(); // Limpa o buffer do teclado
        printf("INSIRA O NOME DO ALUNO %d:\n", i + 1);
        scanf("%[^\n]", curso1.aluno3[i].nome);
        printf("INSIRA A IDADE DO ALUNO %d:\n", i + 1);
        scanf("%d", &curso1.aluno3[i].idade);
        printf("INSIRA A NOTA DO ALUNO %d:\n", i + 1);
        scanf("%lf", &curso1.aluno3[i].nota);
    }

    // Imprimindo informações do curso e de seus alunos
     printf("\n//--------------------------------------------------------//\n");
    printf("NOME DO CURSO: %s\n", curso1.nome);
    for (int i = 0; i < 3; i++)
    {
        printf("%d- ALUNO: %s\n",i+1,curso1.aluno3[i].nome );

        printf("IDADE: %d\n", curso1.aluno3[i].idade);
        printf("NOTA: %.2lf\n", curso1.aluno3[i].nota);
    }
     printf("\n//--------------------------------------------------------//\n");
    // Definindo uma estrutura listadecursos que contém um array de Curso
    typedef struct
    {
        Curso curso_da_Facimp[10];
    } listadecursos;

    // Declarando uma lista de cursos e atribuindo nomes a eles
    listadecursos lista;
    strcpy(lista.curso_da_Facimp[0].nome, "Análise e Desenvolvimento de Sistemas");
    strcpy(lista.curso_da_Facimp[1].nome, "Administração");
    strcpy(lista.curso_da_Facimp[2].nome, "Biomedicina");
    strcpy(lista.curso_da_Facimp[3].nome, "Ciências da Computação");
    strcpy(lista.curso_da_Facimp[4].nome, "Engenharia de Computação");
    strcpy(lista.curso_da_Facimp[5].nome, "Engenharia Civil");
    strcpy(lista.curso_da_Facimp[6].nome, "Enfermagem");
    strcpy(lista.curso_da_Facimp[7].nome, "Educação Física - Licenciatura");
    strcpy(lista.curso_da_Facimp[8].nome, "Direito");
    strcpy(lista.curso_da_Facimp[9].nome, "Ciências Contábeis");
    
    // Imprimindo nomes dos cursos
    printf("CURSOS NA LISTA:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d-%s\n", i + 1, lista.curso_da_Facimp[i].nome);
    }

    // Atribuindo informações a alguns alunos em cursos específicos
    strcpy(lista.curso_da_Facimp[0].aluno3[0].nome, "Luiz Gonzaga");
    printf("\n//--------------------------------------------------------//\n");
    printf("Informe a idade de Luiz Gonzaga:\n");
    scanf("%d", &lista.curso_da_Facimp[0].aluno3[0].idade);
    printf("Informe a nota de Luiz Gonzaga:\n");
    scanf("%lf", &lista.curso_da_Facimp[0].aluno3[0].nota);

    strcpy(lista.curso_da_Facimp[1].aluno3[0].nome, "Anna Jullia");
    printf("Informe a idade de Anna Jullia:\n");
    scanf("%d", &lista.curso_da_Facimp[1].aluno3[0].idade);
    printf("Informe a nota de Anna Jullia:\n");
    scanf("%lf", &lista.curso_da_Facimp[1].aluno3[0].nota);

    strcpy(lista.curso_da_Facimp[2].aluno3[0].nome, "Carol de Niteroi");
    printf("Informe a idade de Carol de Niteroi:\n");
    scanf("%d", &lista.curso_da_Facimp[2].aluno3[0].idade);
    printf("Informe a nota de Carol de Niteroi:\n");
    scanf("%lf", &lista.curso_da_Facimp[2].aluno3[0].nota);
     printf("\n//--------------------------------------------------------//\n");
    // Imprimindo informações de alguns alunos em cursos específicos
    for (int i = 0; i < 3; i++)
    {
         
        printf("Curso: %s\n", lista.curso_da_Facimp[i].nome);
        for (int j = 0; j < 1; j++)
        {
            printf("Aluno %d:\n", j + 1);
            printf("Nome: %s\n", lista.curso_da_Facimp[i].aluno3[j].nome);
            printf("Idade: %d\n", lista.curso_da_Facimp[i].aluno3[j].idade);
            printf("Nota: %.2lf\n", lista.curso_da_Facimp[i].aluno3[j].nota);
        }
    }

    return 0;
}