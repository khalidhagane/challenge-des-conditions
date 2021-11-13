#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1,N2,S,M;
    printf("entre le nombre N1 est : ");
    scanf("%d",&N1);
    printf("entre le nombre N2 est : ");
    scanf("%d",&N2);

    if(N1==N2){
        M=(N1+N2)*3;
        printf("le triple de leur somme : %d",M);
    }
    else {
        S=N1+N2;
        printf("la somme de deux valeurs : %d",S);

    }
    return 0;
}
