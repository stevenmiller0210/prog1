#include <stdio.h>
//Hazi feladat
int main(){
    
    int a;
    int b;

    printf("Szia. Ez egy teglalap terulet/kerulet kiaszamito program.\n");
    
    printf("Kerlek add meg az A oldal hosszat.\n");
    scanf("%d",&a);

    printf("Kerlek add meg a B oldal hosszat.\n");
    
    scanf("%d",&b);
    int k = 2*(a+b);
    int t = a*b;

    printf("A teglalap kerulete: %d cm\nA teglalap terulete: %d cm^2\n",k,t);
    
return 0;
}