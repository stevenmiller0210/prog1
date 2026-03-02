#include <stdio.h>


int main(){
    
    int osszeg = 0;

    for (int i = 1; i < 1000; i++){
        if (i%3 == 0 || i % 5 == 0){
        osszeg = osszeg + i;
        }
    }
    printf("1000-nel kisebb szamok osszege, mely 3-nak vagy 5-nek a tobbszorosei : %d\n",osszeg);

    return 0;
}
