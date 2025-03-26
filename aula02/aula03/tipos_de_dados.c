#include <stdio.h>


int main(){
   // char'A', 'a', -80
   //int -125, 0, 123456
   //float 9.123456f, 0.0f, 0.665666f
   //doble -9.123456789012345, 4.012345678912345
   // void sem tipo

   printf("o tipo 'char' ocupa %i bytes e vai de %i a %i\n", sizeof(char), -127,128);
   printf("o tipo 'int' ocupa %i bytes e vai de %i a %i\n", sizeof(int), -2147483648,2147483648);
   printf("o tipo 'float' ocupa %i bytes e vai de %E a %E\n", sizeof(float), -3.4E+38,3.45E+38);
   printf("o tipo 'double' ocupa %i bytes e vai de %LE a %LE\n", sizeof(double), -1.8E+300,1.8E+300);
   printf("o tipo 'void' ocupa %i bytes\n", sizeof(void));
   
    return 0;
}