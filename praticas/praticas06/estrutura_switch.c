#include <stdio.h>

int main(){
    int nota = 0;

    scanf("%i", &nota);

    switch(nota){
        case 1 : printf("voce ganhou'*'\n"); break;
        case 2 : printf("voce ganhou'**'\n"); break;
        case 3 : printf("voce ganhou'***'\n"); break;
        case 4 : printf("voce ganhou'****'\n"); break;
        case 5 : printf("voce ganhou'*****'\n"); break;
        default : printf("nota invalida\n");
        
    }

    return 0;
}