#include <stdio.h>

int main() {

    char szam_sztring[2000]; 
    int osszeg = 0;

    printf("Szám: ");

    scanf("%1999s", szam_sztring);

    for (int i = 0; szam_sztring[i] != '\0'; i++) {
  
        if (szam_sztring[i] >= '0' && szam_sztring[i] <= '9') {
        
            osszeg += szam_sztring[i] - '0';
        }
    }

    printf("\nA számjegyek összege: %d\n", osszeg);

    return 0;
}