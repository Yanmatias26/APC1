#include <stdio.h>

int main(){
    int idade = 0;
    float media = 0.0f;
    int leu_certo = 0;

    printf("Digite sua idade:");
    scanf("%i", &idade);
    getchar();

    if(idade < 16){
        printf("Voce nao pode votar\n");
    } else if (idade < 18 || idade >70) {
            printf("Voce pode votar\n");
        } else {
            printf("Voce eh obrigado a votar.\n");
        } 

        printf("Digite sua media final\n");
        leu_certo = scanf("%f", &media);

        if(media < 0.0f || media > 10 || !leu_certo){
            printf ("A media tem que ser entre 0 a 10.\n");
            return 0;
        }

        if (media == 0.0f){
            printf("A mencao eh SR,\n");
        } else if (media <3.0f){
            printf("A mencao eh II\n");
        } else if (media < 5.0f){
            printf("A mencao eh MI.\n");
        } else if (media < 7.0f){
            printf("A media eh MM.\n");
        } else if (media < 9.0f){
            printf("A mencao eh MS.\n");
        } else{
            printf("A mencao eh SS.\n");
        }
        
    return 0;
}
