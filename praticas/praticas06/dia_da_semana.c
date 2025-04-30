#include <stdio.h>

int main(){
    int dia;

    printf("Digite um dia\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1: printf("domingo"); break;
    case 2: printf("Segunda"); break;
    case 3: printf("Terca"); break;
    case 4: printf("Quarta"); break;
    case 5: printf("Quinta"); break;
    case 6: printf("Sexta"); break;
    case 7: printf("Sabado"); break;
    default :printf("Nao eh um dia");
    }

    return 0;
}