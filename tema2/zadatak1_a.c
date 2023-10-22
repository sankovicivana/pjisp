/*

Napisati C program koji traži od korisnika da unese dva broja. Ispisati
veći od ta dva broja.

*/

#include <stdio.h>

int main()
{
    int broj1, broj2;

    printf("Unesite prvi broj: ");
    scanf("%d", &broj1);

    printf("Unesite drugi broj: ");
    scanf("%d", &broj2);

    if (broj1 > broj2) {
        printf("Veći broj je: %d\n", broj1);
    }
    else if (broj2 > broj1) {
        printf("Veći broj je: %d\n", broj2);
    }
    else {
        printf("Brojevi su jednaki.\n");
    }

    return 0;
}
