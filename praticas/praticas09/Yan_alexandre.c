#include <stdio.h>
#include <string.h>

int main(){
    char primeiro_nome[11];
    char ultimo_nome[11];

    printf("DIGITE SEU PRIMEIRO NOME\n");
    scanf("%s", primeiro_nome);

    printf("DIGITE SEU SEGUNDO NOME\n");
    scanf("%s", ultimo_nome);


    char nome [31];
    strcpy(nome, primeiro_nome);
    strcat(nome, " ");
    strcat(nome, ultimo_nome);

    printf("%s", nome);

    return 0;
}