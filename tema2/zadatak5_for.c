/*
  Sa standardnog ulaza učitati prirodan broj N. Ispisati sve njegove činioce.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Unesite prirodan broj n: ");
    scanf("%d", &n);

    printf("Cinioci broja %d su: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
