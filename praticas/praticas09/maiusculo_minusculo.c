#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[11];
    char maiusculo[11];
    char minusculo[11];

    printf("DIGITE UMA PALAVRA DE ATE 10 CARACTERES\n");
    scanf("%s", string);

    memset(maiusculo, '\0', sizeof(maiusculo));
    memset(minusculo, '\0', sizeof(minusculo));
    
    for(int i= 0; i<strlen(string); i++){
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string[i]);
    }
    printf("%s\n%s\n", maiusculo, minusculo);

    return 0;
}