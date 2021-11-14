#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,x0,x1,x2,d;
    printf("entrer le nombre A :");
    scanf("%f",&a);
    printf("entrer le nombre B :");
    scanf("%f",&b);
    printf("entrer le nombre C :");
    scanf("%f",&c);

     d=pow(b,2)-4*a*c;

      if(d>0){
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);

        printf("L'equation a deux solutions distinctes :\n");
        printf("X1 = %.2f\n",x1);
        printf("X2 = %.2f\n",x2);
       }
     else if(d==0){
        x0=(-b)/2*a;
        printf("x0=%.2f",x0);
       }
     else printf("n'a pas de solution reelle");

    return 0;
}

