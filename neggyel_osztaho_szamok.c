#include<stdio.h>

int main(){

    int szam;
    printf("Kerlek irj egy szamot.");
    scanf("%d",&szam);
    printf("A neggyel oszthato szamok %d-ig:\n",szam);
    for (int i = 1; i <= szam; i ++){
        if (i % 4 == 0){
            printf("%d\n",i);
        }
    }


    return 0;
}