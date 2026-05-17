#include <stdio.h>
#include <stdlib.h> // A rand() és srand() függvényekhez
#include <time.h>   // A time() függvényhez

int main() {
    int n, also, felso;

    // 1. Paraméterek bekérése
    printf("Hány db random számot kérsz?\n");
    scanf("%d", &n);

    printf("Alsó határ: ");
    scanf("%d", &also);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    // Véletlenszám-generátor inicializálása az aktuális idővel (hogy mindig más legyen a sorozat)
    srand(time(NULL));

    // 2. Számok generálása és kiíratása
    printf("\nA generált számok: ");
    
    for (int i = 0; i < n; i++) {
        // Zárt intervallumos véletlenszám-generálás képlete: [alsó, felső]
        int generalt_szam = (rand() % (felso - also + 1)) + also;
        
        printf("%d", generalt_szam);
        
        // Szóköz kiírása az elemek közé
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n"); // Sortörés a végére a tisztább megjelenésért

    return 0;
}