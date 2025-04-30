#include <stdio.h>

int main(){
    int numero = 0;

    printf("Digite um numero\n");
    scanf("%i", &numero);

    int numero_par = numero % 2 ==0;
    if (numero_par){
        printf("O numero %i eh par\n", numero);
    } else {
        printf("O numero %i eh impar\n", numero);
    }

    return 0;
}