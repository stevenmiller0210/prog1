#include <stdio.h>


int main(){

    int i = 32;

    while(i <= 126){
        printf("%d:%c\n",i,i);
        i++;
    }

    return 0;
}