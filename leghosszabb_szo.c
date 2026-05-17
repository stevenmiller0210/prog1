#include <stdio.h>
#include <string.h> 

int main() {
    char szo[256]; 
    int szo_db = 0;
    int max_hossz = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1) {
        printf("Szó: ");
        
        fgets(szo, sizeof(szo), stdin);

        szo[strcspn(szo, "\n")] = '\0';

        if (strcmp(szo, "*") == 0) {
            break;
        }

        szo_db++;

        int akt_hossz = strlen(szo);
        
        if (akt_hossz > max_hossz) {
            max_hossz = akt_hossz;
        }
    }

    
    printf("\n%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", szo_db, max_hossz);

    return 0;
}