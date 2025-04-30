#include <stdio.h>
#include <math.h>

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    float delta;

    printf("Digite um valor para a, um valor para b e um para c:\n");
    scanf("%d", &a);
    
    scanf("%d", &b);
    
    scanf("%d", &c);

    delta = b * b -4 * a * c;

    if(delta < 0){

        printf("a equacao nao tem raizes\n");
    } else if(delta > 0){
        float x1 = (-b + sqrt(delta)) /(2 * a);
        float x2 = (-b - sqrt(delta)) /(2 * a);
        printf("x1 eh %f e x2 eh %f", x1, x2);

    } else{
        float x = -b / (2.0*a);
        printf("x eh %f", x);
    }


    return 0;
}