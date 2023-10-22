/*
Zadatak 2
Dat je niz od maksimalno 20 realnih elemenata. Učitati n elemenata, a
zatim naći maksimalnu vrednost.
*/

#include <stdio.h>
#define MAX 20

int main(){
	
	int niz[MAX];
	int n;
	int indexMax = 0; 

	do {
		printf("Unesi n:");
		scanf("%d", &n);
	} while (n <= 0 || n > MAX);
	
	for (int i = 0; i < n; i++) {
		printf("a[%d]=",i);
		scanf("%d", &niz[i]);
	}
	
	for (int i = 1; i < n; i++) {
		if (niz[i] > niz[indexMax]) {
			indexMax = i;
		}
	}
	
	printf("Maksimalna vrednost je %d", niz[indexMax]);
    
	return 0;
}