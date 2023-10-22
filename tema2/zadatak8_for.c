/*
Napisati program koji obrće cifre bilo koje celobrojne vrednosti.
Na primer, za broj 1234, rezultat nakon obrtanja je 4321
*/

#include <stdio.h>

int main() {
    int broj, obrnutiBroj = 0, ostatak;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    while (broj != 0) {
        ostatak = broj % 10;
        obrnutiBroj = obrnutiBroj * 10 + ostatak;
        broj /= 10;
    }

    printf("Broj nakon obrtanja cifara: %d\n", obrnutiBroj);

    return 0;
}
