/*
  1.4 Izračunavanje površine trougla u ravni
*/
#include <stdio.h>

int main() {
  
    double osnovna_stranica, visina, povrsina;

    printf("Unesite duzinu osnovne stranice trougla: ");
    scanf("%lf", &osnovna_stranica);

    printf("Unesite visinu trougla: ");
    scanf("%lf", &visina);

    povrsina = 0.5 * osnovna_stranica * visina;

    printf("Povrsina trougla je: %.2lf\n", povrsina);

    return 0;
}
