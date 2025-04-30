#include <stdio.h>

int main(){
    int idade =0;
    printf("Digite sua idade:");
    scanf("%i", &idade);
    getchar();
    printf("voce tem %i anos\n", idade);

    float nota = 0.0f;
    printf("Digite sua nota:");
    scanf("%f", &nota);
    getchar();
    printf("sua nota e %.1f\n", nota);
  
    return 0;
}