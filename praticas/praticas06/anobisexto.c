#include <stdio.h>

int main(){
    int ano;

    printf("Digite um ano:\n");
    scanf("%d", &ano);

    
    int ano_4 = ano % 4 == 0;
    int ano_nao_multiplo_100 = ano % 100 != 0;
    int ano_4_enao_100 = ano_4 && ano_nao_multiplo_100;
    int ano_multiplo_400 = ano % 400 == 0;
    int ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400 = ano_4_enao_100 || ano_multiplo_400;

    if(ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400){

        printf("o ano %d eh bissexto!", ano);
    } else{
        printf("o ano %d nao eh bissexto!", ano);
    }

    return 0;
}