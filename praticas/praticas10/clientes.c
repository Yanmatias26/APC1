#include <stdio.h>
#include <string.h>

int main()
{
    struct cliente_t
    {
        char nome[61];
        char telefone[15];
        char email[61];
    };

    struct cliente_t cliente;

    printf("Entre com o nome do cliente: ");
    scanf("%s", cliente.nome);
    printf("Entre com o telefone do cliente: ");
    scanf("%s", cliente.telefone);
    printf("Entre com a email do cliente: ");
    scanf("%s", cliente.email);

    printf("Dados do cliente:\n");
    printf("%s\n", cliente.nome);
    printf("%s\n", cliente.telefone);
    printf("%s\n", cliente.email);

    return 0;
}