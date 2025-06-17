#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3
#define JOGADOR_X 'X'
#define JOGADOR_O 'O'
#define VAZIO ' '



int main()
{
    int opcao = 0;

    while (opcao != 4)
    {
        system("clear");
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
        while (getchar() != '\n')
            ;

        switch (opcao)
        {
        case 7:
        {
            system("clear");
            printf("VOCE ACHOU UM EASTER EGG!\n");
            printf("Pressione ENTER para continuar...");
            while (getchar() != '\n')
                ;
            break;
        }
        case 1:
        {
            system("clear");
            char tabuleiro[TAM][TAM];
            char jogador_atual = JOGADOR_X;
            int jogadas = 0;
            int ganhou = 0;

            // Inicializa tabuleiro
            for (int i = 0; i < TAM; i++)
            {
                for (int j = 0; j < TAM; j++)
                {
                    tabuleiro[i][j] = VAZIO;
                }
            }

            while (!ganhou && jogadas < TAM * TAM)
            {
                // Exibe tabuleiro
                system("clear"); // ou "cls" no Windows
                printf("\n   a   b   c\n");
                for (int i = 0; i < TAM; i++)
                {
                    printf("%d ", i + 1);
                    for (int j = 0; j < TAM; j++)
                    {
                        printf(" %c ", tabuleiro[i][j]);
                        if (j < TAM - 1)
                            printf("|");
                    }
                    printf("\n");
                    if (i < TAM - 1)
                        printf("  ---+---+---\n");
                }

                // Entrada do jogador
                int linha, coluna;
                printf("\nJogador %c, digite a linha (1-3) e coluna (1-3): ", jogador_atual);
                scanf("%d %d", &linha, &coluna);

                // Validação
                while (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || tabuleiro[linha - 1][coluna - 1] != VAZIO)
                {
                    printf("Posição inválida. Tente novamente: ");
                    scanf("%d %d", &linha, &coluna);
                }

                // Jogada
                tabuleiro[linha - 1][coluna - 1] = jogador_atual;
                jogadas++;

                // Verifica vitória
                for (int i = 0; i < TAM; i++)
                {
                    // Linhas
                    if (tabuleiro[i][0] == jogador_atual && tabuleiro[i][1] == jogador_atual && tabuleiro[i][2] == jogador_atual)
                        ganhou = 1;
                    // Colunas
                    if (tabuleiro[0][i] == jogador_atual && tabuleiro[1][i] == jogador_atual && tabuleiro[2][i] == jogador_atual)
                        ganhou = 1;
                }
                // Diagonais
                if (tabuleiro[0][0] == jogador_atual && tabuleiro[1][1] == jogador_atual && tabuleiro[2][2] == jogador_atual)
                    ganhou = 1;
                if (tabuleiro[0][2] == jogador_atual && tabuleiro[1][1] == jogador_atual && tabuleiro[2][0] == jogador_atual)
                    ganhou = 1;

                if (ganhou)
                {
                    system("clear");
                    printf("\n   a   b   c\n");
                    for (int i = 0; i < TAM; i++)
                    {
                        printf("%d ", i + 1);
                        for (int j = 0; j < TAM; j++)
                        {
                            printf(" %c ", tabuleiro[i][j]);
                            if (j < TAM - 1)
                                printf("|");
                        }
                        printf("\n");
                        if (i < TAM - 1)
                            printf("  ---+---+---\n");
                    }
                    printf("\nParabéns! O jogador %c venceu!\n", jogador_atual);
                    break;
                }

                if (jogadas == TAM * TAM)
                {
                    system("clear");
                    printf("\n   1   2   3\n");
                    for (int i = 0; i < TAM; i++)
                    {
                        printf("%d ", i + 1);
                        for (int j = 0; j < TAM; j++)
                        {
                            printf(" %c ", tabuleiro[i][j]);
                            if (j < TAM - 1)
                                printf("|");
                        }
                        printf("\n");
                        if (i < TAM - 1)
                            printf("  ---+---+---\n");
                    }
                    printf("\nO jogo empatou!\n");
                    break;
                }

                // Troca de jogador
                jogador_atual = (jogador_atual == JOGADOR_X) ? JOGADOR_O : JOGADOR_X;
            }
            printf("Pressione ENTER para continuar...");
            while (getchar() != '\n')
                ;
        }
        case 2:
        {
            break;
        };

        case 3:
        {
            system("clear");
            printf("Sobre o jogo:\n");
            printf("Desenlvovlido em C\n");
            printf("por Yan Matias e Theo torres\n");
            printf("Copyrught(C)\n");
            printf("Pressione ENTER para continuar...");
            while (getchar() != '\n')
                ;
            break;
        };

        case 4:
        {
            system("clear");
            printf("Ate logo!");
            break;
        };
        break;
        default:
        {
            system("clear");
            printf("OPCAO INVALIDA\n");
            break;
        }
        }
    }

    return 0;
}