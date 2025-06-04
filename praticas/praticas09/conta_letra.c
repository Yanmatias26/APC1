#include <stdio.h>
#include <string.h>

int main(){
    char frase[31];

    printf("DIGITE UMA FRASE\n");
    scanf("%[^\n]s", frase);
    getchar();

    char letra;

    printf("DIGITE UMA LETRA\n");
    scanf("%c", &letra);
    
    int quantidade = 0;
    
    for(int i=0; i<strlen(frase); i++){
        if(frase[i] == letra){
            quantidade++;
        }
    }
    if(quantidade > 0){
        printf("%i", quantidade);
    } else {
        printf("A FRASE NAO CONTEM A LETRA\n");
    }


    return 0;
}
