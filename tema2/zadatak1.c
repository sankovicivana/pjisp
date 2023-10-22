/*
Napisati program koji od korisnika traži da unese tri celobrojne vrednosti,
na osnovu kojih će se izračunati, a zatim ispisati njihova aritmetička,
harmonijska, geometrijska i kvadratna sredina.
• Formule za tražene sredine slobodno potražiti na Internetu
*/


#include <stdio.h>
#include <math.h>

int main() {
 
    int broj1, broj2, broj3;
    double aritmeticka_sredina, harmonijska_sredina, geometrijska_sredina, kvadratna_sredina;

    printf("Unesite tri celobrojne vrednosti: ");
    scanf("%d,%d,%d", &broj1, &broj2, &broj3);

    aritmeticka_sredina = (broj1 + broj2 + broj3) / 3.0;

    harmonijska_sredina = 3.0 / ((1.0 / broj1) + (1.0 / broj2) + (1.0 / broj3));

    geometrijska_sredina = pow(broj1 * broj2 * broj3, 1.0 / 3.0);

    kvadratna_sredina = sqrt((pow(broj1, 2) + pow(broj2, 2) + pow(broj3, 2)) / 3.0);

    printf("Aritmeticka sredina: %.2lf\n", aritmeticka_sredina);
    printf("Harmonijska sredina: %.2lf\n", harmonijska_sredina);
    printf("Geometrijska sredina: %.2lf\n", geometrijska_sredina);
    printf("Kvadratna sredina: %.2lf\n", kvadratna_sredina);

    return 0;
}
