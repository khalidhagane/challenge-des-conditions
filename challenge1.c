#include <stdio.h>
int main(){
    float f,c;
    printf("entrer la température en Fahrenheit :");
    scanf("%f",&f);

    c = (f-32)/1.8;

    printf("Celsius : %.2f\n",c);

    if(c<=0){
        printf("tres froid");
    }
    else if(c>0 && c<=26){
        printf("froid");
    }
    else if(c>26 && c<70){
        printf("chaud");
    }
    else {
        printf(" tres chaud");
    }
}
