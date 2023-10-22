/*
Napisati program koji prihvata broj dana kao celobrojnu vrednost i na
osnovu nje izračunava ukupan broj godina, meseci i dana. Uzeti da
godina ima isključivo 365, a mesec 30 dana.

*/
#include <stdio.h>

int main() {

    int broj_dana, godine, meseci, dani;
    
    printf("Unesite broj dana: ");
    scanf("%d", &broj_dana);
    
    godine = broj_dana / 365;
    broj_dana %= 365; 
    meseci = broj_dana / 30;
    dani = broj_dana % 30;
    

    printf("%d godina, %d meseci i %d dana\n", godine, meseci, dani);
    
    return 0;
}
