#include <stdio.h>
#include <math.h>

//Hazi feladat
int main(){

    float a;    
    double PI = 3.141592653589793;

    printf("Szia. Ez egy kor teruletet/keruletet kiaszamito program.\n");
    printf("Kerlek add meg a kor sugarat.");

    scanf("%f",&a);

    printf("A kor kerulete: %.4f\n A kor terulete: %.4f\n",2*a*PI,a*a*PI);

    return 0;
}