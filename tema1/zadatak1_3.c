/*
 1.3 Računanje obima i površine kruga
*/

#include <stdio.h>
#include <math.h>

int main() {

    double poluprecnik, obim, povrsina;

    printf("Unesite poluprecnik kruga: ");
    scanf("%lf", &poluprecnik);

    obim = 2 * M_PI * poluprecnik;
    povrsina = M_PI * pow(poluprecnik, 2); 

    printf("Obim kruga: %.2lf\n", obim);
    printf("Povrsina kruga: %.2lf\n", povrsina);

    return 0;
}
