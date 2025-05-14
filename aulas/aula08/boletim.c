#include <stdio.h>

int main(){

    float boletim[6][3];
    //   0 1 2
    // 0  | | |
    // 1| | | | 
    // 2| | | |
    // 3| | | | 
    // 4| | | |
    // 5| | | |
    printf("entre com suas notas\n");
    for(int i=0; i<6;i++){
        for(int j=0; j<3; j++){
            printf("nota %i: ", j + 1);
            scanf("%f", &boletim[i][j]);
        }
        boletim[i][2] = 0.4 * boletim[i][0] + 0.6f * boletim[i][1];
    }
    printf("seu bolteim\n");
    for(int i = 0; i <6; i++){
        printf("disciplina %i: ",i+1);
        for(int j=0;j<3;j++){
            printf("%5.1f",boletim[i][j]);
        }
        printf("\n");
    }

    return 0;
}