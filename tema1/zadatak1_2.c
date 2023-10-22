#include <stdio.h>

/*
 Zbirka: "Rešeni zadaci iz programskog jezika C", Laslo Kraus
 1.1 Izračunavanje zbira dva cela broja
*/
int main() {
 
    int prvi_broj, drugi_broj;

    printf("Unesite prvi broj: ");
    scanf("%d", &prvi_broj);

    printf("Unesite drugi broj: ");
    scanf("%d", &drugi_broj);

    printf("Zbir brojeva je: %d\n", prvi_broj + drugi_broj);

    return 0;
}
