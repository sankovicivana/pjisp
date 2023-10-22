/*
Sa standardnog ulaza učitati prirodne brojeve N i q. Koristeći while ciklus
ispisati sve brojeve od 2 do N koji su deljivi sa q
*/

#include <stdio.h>
#include <math.h>

int main() {
	
	int n, q;
	int brojac = 2;

	do {
		printf("Unesi n:");
		scanf("%d", &n);
	} while(n < 2);

	do {
		printf("Unesi q:");
		scanf("%d", &q);
	} while(n <= 0);
	
	while(brojac <= n){ 
		if (brojac % q == 0) {
			printf("broj %d je deljiv sa %d :\n", brojac, q);
		}
		brojac++;
	}
	
	return 0;
}