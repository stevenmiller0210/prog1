#include<stdio.h>

int main(){

    int f0 = 0;
    int f1 = 1;

    printf("Hanyadik fibonacci szamra vagy kivancsi? ");

    int szam;

    scanf("%d",&szam);

    int fibo = 0;

    for (int i = 2; i <= szam; i++){

        fibo= f0+f1;
        f0 = f1;
        f1 = fibo;
       

    }

    printf("a keresett szam: %d\n",fibo);





    return 0;
}