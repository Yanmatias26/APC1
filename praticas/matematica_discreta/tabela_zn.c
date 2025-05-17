#include <stdio.h>

int main(){

    int a;

    printf("Digite um numero\n");
    scanf("%i", &a);
int x = a-1 ;

    int matriz[a][a];

    for(int i = 0; i < a; i++){

        for(int j = 0; j< a; j++){
       matriz [i][j] = (i * j) % a;}
        
    }

    printf("    ");
    for (int x = 0; x < a; x++) {
        printf("%3d ", x);
    }
    

    printf("\n");
    for(int i = 0; i < a; i++){
        printf(" %i| ",i);
        for(int j = 0;j<a;j++){
            
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}