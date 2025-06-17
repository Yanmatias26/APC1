#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int opcao = 0;

    printf("----------------------\n");
    printf("|   MENU PRINCIPAL   |\n");
    printf("----------------------\n");
    printf("|   1- NOVO JOGO     |\n");
    printf("|   2- VER SCORE     |\n");
    printf("|   3- SOBRE O JOGO  |\n");
    printf("|   4- SAIR          |\n");
    printf("----------------------\n");
    printf("| ESCOLHA UMA OPCAO  |\n");

    scanf("%i", &opcao);
    while (getchar() != '\n');

    switch (opcao)
    {
    case 7:{
        system("clear");
        printf("VOCE ACHOU UM EASTER EGG!\n");
        while(getchar() != '\n');
        break;}
    case 1:{
        system("clear");
        int matriz[8][8];
        int x[7]={1,2,3,4,5,6,7};

       /* for(int i = 0;i<7;i++){
            for(int j=0;j<7;j++)
        }*/
       for(int i=0; i<7; i++){
        printf("%i", x[i]);
       }
        for(int i=0; i<8; i++){
            printf("%i", i);
            for(int j=0;j<8;j++){
                
                printf("-",matriz[i][j]);
            }printf("\n");
        }
        break;}
    case 2:{};break;
    case 3:{};break;
    case 4:{};break;
    default:
    system("clear");
    printf("OPCAO INVALIDA\n");break;
    }

    return 0;
}