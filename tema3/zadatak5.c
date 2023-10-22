/*Dat je niz X od maksimalno 25 celobrojnih elemenata. Učitati n elemenata
u niz X i formirati nizove A i B, pri čemu su elementi niza A parni, a
elementi niza B negativni elementi niza X. Ispisati nizove X, A i B.*/

#include <stdio.h>
#define MAX 25

int main() {
	
	int nizX[MAX];
	int nizA[MAX];
	int nizB[MAX];
	int brojacA = 0;
	int brojacB = 0;
	int n;
	
	do {
		printf("Unesi n:");
		scanf("%d",&n);
	} while (n <= 0 && n >= 25);
	
	for (int i = 0; i < n; i++) {
		printf("c[%d]=", i);
		scanf("%d", &nizX[i]);
		if (nizX[i] % 2 == 0) {
			nizA[brojacA] = nizX[i];
			brojacA++;
		}
		if (nizX[i] < 0) {
			nizB[brojacB] = nizX[i];
			brojacB++;
		}
	}

    printf(" \n --------------------- \n");
	printf("Niz x: \n");
	for (int i = 0; i < n; i++) {
		printf("x[%d]=%d\n",i,nizX[i]);
	}
	
	printf(" \n --------------------- \n");
	printf("Niz a: \n");
	for (int i = 0; i < brojacA; i++) {
		printf("a[%d]=%d\n",i,nizA[i]);
	}
	
    printf(" \n --------------------- \n");
	printf("Niz b: \n");
	for (int i = 0; i < brojacB; i++) {
		printf("b[%d]=%d\n",i,nizB[i]);
	}
	
	
	return 0;
}