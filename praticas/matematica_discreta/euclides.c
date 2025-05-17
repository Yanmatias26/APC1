#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("Digite dois numeros\n");
    scanf("%i %i",&a, &b );

    unsigned int ab = a * b;
    
    


    while(b != 0){
        int q = a / b;
        int resto = a - b * q;
        
        if(resto <0){
            resto += (b > 0 ? b : -b);
    
        }
        

        printf("%i = %i * %i + %i\n" , a, b, q, resto);

        a = b;
        b = resto;

    }

    int mmc = ab / a;
    if(mmc < 0) mmc = -mmc;


    printf("O mdc eh %i e o mmc eh %i" , a, mmc);

    return 0;
}