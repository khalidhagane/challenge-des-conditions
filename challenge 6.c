#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,M,J,H,MI,S;
    printf("entre l'annee est : ");
    scanf("%f",&A);

    M=A*12;
    J=A*365;
    H=J*24;
    MI=H*60;
    S=MI*60;

    printf("mois : %.2f\n",M);
    printf("jours : %.2f\n",J);
    printf("heures : %.2f\n",H);
    printf("Minutes : %.2f\n",MI);
    printf("secondes : %.2f\n",S);

    return 0;
}
