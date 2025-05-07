#include <stdio.h>

int main(){
    int nota;
    printf("digite um numero de 1 a 10\n");
    scanf("%i", &nota);

    while(nota < 1 || nota > 10){
        printf("Nota invalida\n");
        printf("digite um numero de 1 a 10\n");
        scanf("%i", &nota);

    }

    printf("O numero esta entre 1 e 10\n");

    return 0;
}