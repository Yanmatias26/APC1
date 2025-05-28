#include <stdio.h>
#include <string.h>

int main()
{

    struct endereco_t
    {
        char logradouro[61];
        int numero;
        long long int cep;
        char complemento[61];
        char cidade[61];
        char uf[3];
    };

    struct cliente_t
    {
        char nome[61];
        long long int telefone;
        char email[61];
        struct endereco_t endereco;
    };

    struct cliente_t cliente;
    strcpy(cliente.nome, "jose");
    cliente.telefone = 6111111111L;
    strcpy(cliente.email, "yan@gnail.com");
    strcpy(cliente.endereco.logradouro, "sqs");
    cliente.endereco.numero = 612;
    cliente.endereco.cep = 700000L;
    strcpy(cliente.endereco.complemento, "iesb");
    strcpy(cliente.endereco.cidade, "Brasilia");
    strcpy(cliente.endereco.uf, "DF");

    printf("Dados do cliente\n");
    printf("Nome %s\n", cliente.nome);
    printf("telefone %lli\n", cliente.telefone);
    printf("Email: %s\n", cliente.email);
    printf("Endereco: %s, %i - %s - %s/%s\n", cliente.endereco.logradouro, cliente.endereco.numero,
           cliente.endereco.complemento, cliente.endereco.cidade, cliente.endereco.uf);
    printf("Cep: %lli\n", cliente.endereco.cep);

    struct cliente_t clientes[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Cliente %i ", i + 1);
        printf("Entre com o nome do cliente:\n");
        scanf("%s", clientes[i].nome);
        printf("Entre com o telefone do cliente:\n");
        scanf("%i", &clientes[i].telefone);
        printf("Entre com o email do cliente:\n");
        scanf("%s", clientes[i].email);
        printf("Entre com o endereco do cliente:\n");
        printf("Logradouro:");
        scanf("%s", clientes[i].endereco.logradouro);
        printf("Numero:");
        scanf("%i", &clientes[i].endereco.numero);
        printf("complemento:");
        scanf("%s", cliente.endereco.complemento);
        printf("cidade:");
        scanf("%s", cliente.endereco.cidade);
        printf("UF:");
        scanf("%s", cliente.endereco.uf);
    }

    for(int i = 0; i < 10; i++){
         printf("Dados do cliente\n");
    printf("Nome %s\n", clientes[i].nome);
    printf("telefone %lli\n", clientes[i].telefone);
    printf("Email: %s\n", clientes[i].email);
    printf("Endereco: %s, %i - %s - %s/%s\n", clientes[i].endereco.logradouro, clientes[i].endereco.numero,
           clientes[i].endereco.complemento, clientes[i].endereco.cidade, clientes[i].endereco.uf);
    printf("Cep: %lli\n", clientes[i].endereco.cep);
    }

    return 0;
}