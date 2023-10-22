/*
Napisati program kojim se vrši prevođenje količine tečnosti iz galona u
litre, ako je 1 galon 4.54 litra. Količina tečnosti u galonima se unosi sa
tastature.
*/


#include <stdio.h>

int main() {
 
    float galoni, litre;
   
    printf("Unesite kolicinu tecnosti u galonima: ");
    scanf("%f", &galoni);
    
    litre = galoni * 4.54;
    
    printf("%.2f galona je %.2f litara.\n", galoni, litre);
    
    return 0;
}
