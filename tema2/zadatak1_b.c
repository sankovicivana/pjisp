/*
Napisati C program koji traži od korisnika da unese tri broja. Ispisati
najmanji od ta tri broja.
*/

#include <stdio.h>

int main() {
    int broj1, broj2, broj3, min;

    printf("Unesite prvi broj: ");
    scanf("%d", &broj1);

    printf("Unesite drugi broj: ");
    scanf("%d", &broj2);

    printf("Unesite treci broj: ");
    scanf("%d", &broj3);

    min = broj1;

    if (broj2 < min) {
        min = broj2;
    }

    if (broj3 < min) {
        min = broj3;
    }

    printf("Najmanji broj je: %d\n", min);

    return 0;
}
