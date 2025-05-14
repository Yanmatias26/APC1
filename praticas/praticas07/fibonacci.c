#include <stdio.h>

int main(){
    int n;
    int anterior = 0;
    int proximo = 1;
    
    printf("Digite um numero\n");
    scanf("%i", &n);

    for(int i = 0; i<n;i++){
        printf("%i, " , proximo);
        int auxiliar;
        auxiliar = proximo;
        proximo = anterior + proximo;
        anterior = auxiliar;
    }

    return 0;
}