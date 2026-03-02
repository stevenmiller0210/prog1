#include <stdio.h>

int main() {
    int szam;
    printf("Adj meg egy pozitiv egesz szamot: ");
    scanf("%d", &szam);

    int i = 1;
    while (i <= szam) {
        printf("%d", i);

        if (i < szam) {
            printf(" --> ");
        }

        i++;
    }

    return 0;
}