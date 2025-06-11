#include <stdio.h>
#include <string.h>

int main(){
    char nomes[10][101];

    for(int i=0; i<10;i++){
        printf(" Digite um nome para %i\n", i+1);
       
         scanf("%[^\n]s", nomes[i]);
        while(getchar()!='\n');
    }
    char sobrenome[31];
    int achou = 0;

    printf("DIGITE UM SOBRENOME\n");
    scanf("%s", sobrenome); 
        while(getchar()!='\n');


    for(int i=0; i<10; i++){
        if(strstr(nomes[i], sobrenome)){
            printf("%s\n",nomes[i]);
            achou = 1;
        }

    }
    if(achou = 0){
        printf("NENHUM NOME TEM SOBRENOME");
    }


    return 0;
}