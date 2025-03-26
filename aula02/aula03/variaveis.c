#include <stdio.h>

int main(){
    char tecla;
    int numero;
    float moeda;
    double dizima;

    tecla = 'd';
    printf("valor de tecla = %i\n", tecla);
    printf("valor de tecla = %c\n", tecla);
    
    numero = 4562;
    printf("valor do numero = %i\n", numero);

    moeda = 52.13f;
    printf("valor da moeda = %i\n", moeda);

    dizima = 2.3333333333;
    printf("valor da dizima = %.10f\n", dizima);

    return 0;
}