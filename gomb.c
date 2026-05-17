#include <stdio.h>
#define _USE_MATH_DEFINES // Szükséges bizonyos fordítóknál a M_PI eléréséhez
#include <math.h>

// Függvény egy valós szám (double) beolvasására
double get_double() {
    double ertek;
    // Ellenőrzött beolvasás (ha nem számot kap, újra kérheti, de itt az alap változat szerepel)
    scanf("%lf", &ertek);
    return ertek;
}

// Függvény a gömb felszínének kiszámítására: A = 4 * pi * r^2
double calc_surface_area(double r) {
    return 4.0 * M_PI * r * r;
}

// Függvény a gömb térfogatának kiszámítására: V = (4/3) * pi * r^3
double calc_volume(double r) {
    return (4.0 / 3.0) * M_PI * r * r * r;
}

int main() {
    double sugar, felszin, terfogat;

    
    printf("Kérem adja meg a gömb sugarát: ");

    sugar = get_double();

    
    if (sugar < 0) {
        printf("A sugár nem lehet negatív!\n");
        return 1; // 
    }

    
    felszin = calc_surface_area(sugar);
    terfogat = calc_volume(sugar);

    printf("\n--- Eredmények ---\n");
    printf("Gömb sugara:  %.2lf\n", sugar);
    printf("Felszín (A):  %.2lf\n", felszin);
    printf("Térfogat (V): %.2lf\n", terfogat);

    return 0;
}