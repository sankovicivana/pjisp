#include <stdio.h>

#define MAX_SIZE 30

int main() {
    int a[MAX_SIZE], i, j, n, temp;

    do {
        printf("Unesite broj elemenata niza: ");
        scanf("%d", &n);
    } while(n <= 0 || n > MAX_SIZE);

    // Unos elemenata niza
    for(i = 0; i < n; i++) {
        printf("niz[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Selection Sort algoritam za sortiranje niza
    for(i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
      
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    printf("Sortiran niz: [");
    for(i = 0; i < n; i++) {
        if(i > 0) {
            printf(", ");
        }
        printf("%d", a[i]);
    }
    printf("]\n");

    return 0;
}
