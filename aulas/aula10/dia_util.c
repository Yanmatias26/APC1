#include <stdio.h>
#include <stdbool.h>

#define VERDADEIRO true

// #define domingo 1
// #define segunda 2
// #define terca 3
// #define quarta 4
// #define quinta 5
// #define sexta 6
// #define sabado 7

int main()
{
    enum dias_da_semana_0{dom = 1,seg,ter,qua,qui,sex,sab};

    int dia = 0;
    printf("ENTRE COM UM DIA DA SEMANA DE 1 A 7\n");
    scanf("%i", &dia);

    switch (dia)
    {
    case seg:
    case ter:
    case qua:
    case qui:
    case sex:
        printf("EH DIA UTIL\n");
        break;
    case dom:
    case sab:
        printf("EH DIA NAO UTIL\n");
        break;
    default:
        printf("DIA NAO INVALIDO\n");
        break;
    }

    return 0;
}