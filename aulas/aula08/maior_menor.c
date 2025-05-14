#include <stdio.h>

int main(){
   // int numero1; 
   // int numero2; 
    //int numero3; 
   // int numero4; 
   // int numero5; 
   // int numero6; 
   // int numero7; 
   // int numero8; 
   // int numero9; 
    //int numero10;
                                                              // 0, 1, 2, 3, 4, 5,6,7, 8,9
    int numeros[10]; // matriz unidirecional = vetor = array  =  |5|-1|10|6|-5|-7|7|11|2|0| 
    numeros[0] ;
    numeros[1] ;
    numeros[2] ;
    numeros[3] ;
    numeros[4] ;
    numeros[5] ;
    numeros[6] ;
    numeros[7] ;
    numeros[8] ;
    numeros[9] ;
    int maior = -9999;
    int menor = 9999;

    printf("entre com 10 numeros inteiros\n");
    
    for (int i= 0; i<10;i++){
        printf("numero %i:", i+1);
        scanf("%i", &numeros[i]);

        if (maior<numeros[i]){
            maior = numeros[i];
        }
        if( menor>numeros[i]){
            menor = numeros[i];
        }
    }

    printf("Seus numeros foram:\n");
    for(int i=0; i<10;i++){
        printf("%i, ", numeros[i]);
    }

    printf("\n");
    printf("O maior numero foi %i e o menor numero foi %i", maior, menor);


    return 0;
}