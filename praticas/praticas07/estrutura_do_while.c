#include <stdio.h>

int main()
{
    int nota;

    printf("Declare uma nota de 1 a 10\n");

    do
    {
        scanf("%i", &nota);

        if (nota < 1 || nota > 10){
            printf("Tente novamente\n");
          }

    }
    while (nota < 1 || nota > 10)
        ;

    return 0;
}