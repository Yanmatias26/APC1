#include <stdio.h>

int main()
{
    enum dia_da_semana_e
    {
        dom = 1,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    };
    int numero;

    printf("DIGITE UM NUMERO DE 1 A 7\n");
    scanf("%i", &numero);

    switch (numero)
    {
    case dom:
        printf("Domingo\n");
        break;
    case seg:
        printf("Segunda\n");
        break;
    case ter:
        printf("Terca\n");
        break;
    case qua:
        printf("Quarta\n");
        break;
    case qui:
        printf("Quinta\n");
        break;
    case sex:
        printf("Sexta\n");
        break;
    case sab:
        printf("Sabado\n");
        break;
    default:
        printf("Dia da semana invalido\n");
    }

    return 0;
}