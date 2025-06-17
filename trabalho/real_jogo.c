#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define tamanho_tabuleiro 8
#define jogador_1 '○'
#define jogador_2 '●'
#define espaco ' '

int main(){

    char tabuleiro[tamanho_tabuleiro][tamanho_tabuleiro];
    char jogador_atual;

    for(int i = 0;i<tamanho_tabuleiro;i++){
        for(int j=0; j<tamanho_tabuleiro;i++){
            tabuleiro[i][j];
        }
    }
    printf("    1   2   3   4   5   6   7   8\n");
                    printf(" -----------\n");
                    for (int i = 0; i < tamanho_tabuleiro; i++) {
                        printf("%d | %c | %c | %c | %c | %c | %c | %c | \n", i + 1, tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2],tabuleiro[i][3],
                        tabuleiro[i][4]);
                        if (i < tamanho_tabuleiro - 1) {
                            printf(" -----------\n");
                        }
                    }
                    printf(" -----------\n");

    return 0;
}