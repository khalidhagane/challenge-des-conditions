#include <stdio.h>
#include <stdlib.h>

int main()
{
   float N;
      printf("entrer le nombre N : ");
      scanf("%f",&N);

   if(N>0)
       printf(" le nombre est positif");

    else if(N<0)
       printf(" le nombre est negatif");

    else
        printf("le nombre est nul");

    return 0;
}
