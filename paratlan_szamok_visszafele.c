#include<stdio.h>

int main(){

    int szam = 0;
    printf("Irj egy szamot");
    scanf("%d",&szam);


    while (szam >= 1){
        if(szam % 2 == 1){
            printf("%d\n",szam);
        }
        szam = szam -1;
    }


    return 0;
}