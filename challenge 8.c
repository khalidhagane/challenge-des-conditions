#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    printf("entrer la caracter :");
    scanf("%c",&caracter);

    if(caracter>=65 && caracter<=90){
        printf("voilla le caractere de alphabet majuscule ");
       }
    else
        printf("le caractere de alphabet n'a pas majuscule");
    return 0;
}
