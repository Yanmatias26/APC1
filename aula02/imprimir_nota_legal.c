#include <stdio.h>

int main(){
    printf("---------------------------------- \n");
    printf("----------- NOTA LEGAL------------ \n");
    printf("---------------------------------- \n");
    printf("Item              Qde    Prc     Valor \n");
    printf("%-17s %03i %7.2f %7.2f\n", "Caneta Azul", 2, 2.0, 4.0);
    printf("%-17s %03i %7.2f %7.2f\n","Borracha", 1, 5.0, 5.0);
    printf("%-17s %03i %7.2f %7.2f\n","Resma de Pape", 1, 12.0, 12.0);
    printf("---------------------------------- \n");
    printf("TOTAL---------------------R$ %.2f\n", 21.0);

    return 0;
  }