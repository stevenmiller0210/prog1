#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int n, also, felso;

    
    printf("Hány db random számot kérsz?\n");
    scanf("%d", &n);

    printf("Alsó határ: ");
    scanf("%d", &also);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    
    if (n > (felso - also + 1)) {
        printf("Hiba: Nem lehet %d különböző számot generálni egy %d elemű intervallumban!\n", n, felso - also + 1);
        return 1;
    }

    int szamok[n]; 
    int generalt_db = 0; 

    srand(time(NULL));


    while (generalt_db < n) {
        int uj_szam = (rand() % (felso - also + 1)) + also;
        
   
        int benne_van = 0;
        for (int i = 0; i < generalt_db; i++) {
            if (szamok[i] == uj_szam) {
                benne_van = 1; 
                break;         
            }
        }

        if (benne_van == 0) {
            szamok[generalt_db] = uj_szam;
            generalt_db++;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (szamok[j] > szamok[j + 1]) {
            
                int temp = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = temp;
            }
        }
    }

    printf("\nA generált számok: ");
    for (int i = 0; i < n; i++) {
        printf("%d", szamok[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}