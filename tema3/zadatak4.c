/*
Napisati program koji pronalazi prvi element niza koji je najbliži srednjoj
vrednosti niza celih brojeva. Niz može da ima najviše 20 elemenata.
*/

#include <stdio.h>
#include <math.h>
#define MAX 20

int main() {
	
	int n;
	int niz[MAX];
	float srednjaVrednost;
	int s;
	int ind;
	int minEl;
	float minRazlika;
	
	do {
		printf("Unesi n:");
		scanf("%d",&n);
	} while (n <= 0 && n >= 25);
	
	for (int i = 0; i < n; i++) {
		printf("nizC[%d]=", i);
		scanf("%d", &niz[i]); 
		s += niz[i];
	} 
	
	srednjaVrednost = (float)s / n;
	
	printf("srednja vrednost je %.2f \n", srednjaVrednost);

	ind = 0;
	minRazlika = fabs(srednjaVrednost - niz[0]);
	
	for (int i = 1; i < n; i++) {
		if (minRazlika > fabs(srednjaVrednost - niz[i])) {
			minRazlika = fabs(srednjaVrednost - niz[i]);
			ind = i;
		}
		
	}
	
	printf("najbliži srednjoj vrednosti je broj %d ciji je index %d", niz[ind], ind);
	
	
	
	return 0;
}