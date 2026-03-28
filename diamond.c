#include<stdio.h>

int main(){


    printf("Kerlek add meg a gyemant magassagat!");

    int magassag;

    scanf("%d",&magassag);

    if (magassag < 0 || magassag % 2 == 0){
        printf("Csak pozitiv egesz szamok!\n");
        return 0;
    }
   


    int felso = (magassag / 2) + 1;


for(int i = 1; i <= felso; i++) {
    

    for(int j = 1; j <= felso-i; j++) {
        printf(" ");
    }
    

    for(int j = 1; j <= (2 * i - 1); j++) {
        printf("*");
    }
    printf("\n");
}

    int also = magassag/2;

    for (int i = also; i >= 1; i--){

        for(int j = 1; j <= felso-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= (2* i -1); j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}