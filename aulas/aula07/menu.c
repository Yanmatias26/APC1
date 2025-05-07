#include <stdio.h>
#include <stdlib.h>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"

#define reset "\e[0m"

int main(){
    int opcao = 0;

    while(opcao != 4){
        system("clear");
        printf(YEL);
    printf("+-------------------+\n");
    printf("|   menu principal  |\n");
    printf("+-------------------+\n");
    printf("|1 - Novo jogo      |\n");
    printf("|2 - Ver score      |\n");
    printf("|3 - Sobre o jogo   |\n");
    printf("|4 - Sair           |\n");
    printf("+-------------------+\n");
    printf("escolha uma opcao > ");
    printf(reset);
    scanf("%i", &opcao);
    while (getchar() != '\n');  //limpar o buffer do teclado
    

    switch (opcao)
    {
    case 1:{
        int nivel = 0;
        system("clear");
        printf("Nivel do jogo\n");
        printf("1 - Facil\n");
        printf("2- Medio\n");
        printf("3- Dificil\n");
        printf("Escolha um nivel > ");
        scanf("%i", &nivel);
        while(getchar() != '\n');
        break;
    }
    case 2:{
        system("clear");
        printf("Score do jogo\n");
        printf("1 - Jogador A - 1000 pontos\n");
        printf("2 - Jogador B - 700 pontos\n");
        printf("3 - Jogador C - 500 pontos\n");
        printf("4 - Jogador D - 300 pontos\n");
        printf("5 - Jogador E - 100\n");
        printf("Pressione ENTER para continuar...");
        while(getchar() != '\n');
        break;
    }
    case 3:{
        system("clear");
        printf("Sobre o Jogo\n");
        printf("Desenvolvido em C\n");
        printf("Por Yan e Alexandre\n");
        printf("Copyrught(C)\n");
        printf("Pressione ENTER para continuar...");
        while(getchar() != '\n');
        
        break;
    }
    case 4:{
        printf("Ate logo\n");
        
        break;
    }
    default: printf("Opcao invalida! Tente novamente\n");
        break;
    }
    }

    return 0;
}