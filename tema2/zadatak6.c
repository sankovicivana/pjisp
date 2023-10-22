#include <stdio.h>
#include <math.h>

int main() {
    
    float visina_cm, tezina_kg, bmi;

    printf("Unesite visinu (u cm): ");
    scanf("%f", &visina_cm);

    printf("Unesite tezinu (u kg): ");
    scanf("%f", &tezina_kg);


    float visina_m = visina_cm / 100;
    bmi = tezina_kg / (visina_m * visina_m);

    printf("Vas BMI indeks je: %.2f\n", bmi);

    if (bmi < 16.5) {
        printf("Veoma neuhranjeno.\n");
    } else if (bmi >= 16.5 && bmi < 18.5) {
        printf("Neuhranjeno.\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Normalno.\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Prekomerno.\n");
    } else {
        printf("Gojaznost.\n");
    }

    return 0;
}
