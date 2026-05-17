#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file = fopen("valos_szamok.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Hiba a fajl megnyitasakor!\n");
        return 1;
    }

    double osszeg = 0.0;
    char sor[100];

    while (fgets(sor, sizeof(sor), file) != NULL) {
        for (int i = 0; sor[i] != '\0'; i++) {
            if (sor[i] == ',') {
                sor[i] = '.';
            }
        }
        
        double szam = atof(sor);
        osszeg += szam;
    }

    fclose(file);

    printf("%.20f\n", osszeg);

    return 0;
}