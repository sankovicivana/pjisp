/*
Napisati program koji proverava da li se od unetih vrednosti uglova može
formirati trougao. Ukoliko je to moguće, analizirati unete uglove:
• Ako su dva ugla jednaka, ispisati da se radi o jednokrakom trouglu
• Ako je jedan ugao od 90 stepeni, ispisati da se radi o pravouglom
trouglu
• Ako su sva tri ugla jednaka (60 stepeni), ispisati da se radi o
jednakostraničnom trouglu
• Za sve ostale slučajeve, samo ispisati da se može formirati trougao
Napomena:
Ukoliko neki trougao ispunjava više od jedne osobine, ispisati sve
osobine koje zadovoljava.
*/

#include <stdio.h>

int main() {
    int ugao1, ugao2, ugao3;

    // Unos uglova
    printf("Unesite prvi ugao: ");
    scanf("%d", &ugao1);
    printf("Unesite drugi ugao: ");
    scanf("%d", &ugao2);
    printf("Unesite treci ugao: ");
    scanf("%d", &ugao3);

    if (ugao1 + ugao2 + ugao3 == 180 && ugao1 > 0 && ugao2 > 0 && ugao3 > 0) {
        printf("Moze se formirati trougao.\n");

        if (ugao1 == ugao2 || ugao1 == ugao3 || ugao2 == ugao3) {
            printf("Jednokraki trougao.\n");
        }
        if (ugao1 == 90 || ugao2 == 90 || ugao3 == 90) {
            printf("Pravougli trougao.\n");
        }
        if (ugao1 == 60 && ugao2 == 60 && ugao3 == 60) {
            printf("Jednakostranicni trougao.\n");
        }
    } else {
        printf("Ne moze se formirati trougao.\n");
    }

    return 0;
}
