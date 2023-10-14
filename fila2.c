#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;

} No;

void inserir_na_fila(No **fila, int num)
{
    No *aux, *novo = malloc(sizeof(No));
    if (novo)
    {
        novo->valor = num;
        novo->proximo = NULL;
        if (*fila == NULL)
            *fila = novo;

        else
        {
            aux = *fila;
            while (aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    }
    else
        printf("\n Erro ao alocar memoria.\n");
}
No *remover_da_fila(No **fila)
{
    No *remover = NULL;
    if (*fila)
    {
        remover = *fila;
        *fila = remover->proximo;
    }
    else
        printf("\nfila vazia\n");
    return remover;
}

void impressao_da_fila(No *fila)
{

    printf("\t----- fila -----\n");
    while (fila){
        printf("Cliente %d está sendo atendido.\n", fila->valor);
        fila = fila->proximo;
    }

    printf("\t-----fim da fila -----\n");
}
int main()
{
    No *r, *fila = NULL;
    int opc, valor;
    
    do
    {
       printf("\t1 - inserir\n\t2 - remover\n\t3 - imprimir\n\t4- sair\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_na_fila(&fila, valor);
            break;
        case 2:
            r = remover_da_fila(&fila);
            if (r) {
                printf("Removido: %d\n", r->valor);
                free(r);
            }
            break;
        case 3:
           impressao_da_fila(fila);
            break;
            case 4:
            
            break;
        default:
            printf("\n Opc invalida!\n");
        }
    } while (opc!=4);
   
    return 0;
}