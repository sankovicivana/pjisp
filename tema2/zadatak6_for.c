/*
 Napisati program koji ispituje da li je dati prirodan broj n prost. Broj je
 prost ako je deljiv samo sa jedan i sa samim sobom.
*/


#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int d = 0;
	
	do {
		printf("Unesi broj n:");
		scanf("%d",&n);
	} while (n <= 0);
	
	for (int i=2; i< n-1; i++) {
		if (n%i == 0) {
			d = 1;
		}
	}
	
	if (d == 0) {
		printf("Jeste prost.\n");		
	
	} else {
		printf("Nije prost.\n");
	}

	return 0;
}