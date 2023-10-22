/*
Dat je niz A od maksimalno 30 celobrojnih elemenata. Učitati n
elemenata, zatim učitati ceo broj br. Na standardnom izlazu ispisati broj
pojavljivanja br u nizu A.
• Primer:
• A = [2, 5, 6, 2, 8, 9, 2]
• br = 2

Očekivani ispis:
Broj 2 se pojavljuje 3 puta u nizu A = [2, 5, 6, 2, 8, 9, 2].
*/

#include <stdio.h>
#define MAX 30
int main(){
	
	int nizA[MAX];
	int br;
	int brojac = 0;
	int n;
	
	do {
		printf("Unesi n:");
		scanf("%d", &n);
	} while (n <= 0 || n > MAX);
	
	do {
		printf("Unesi br:");
		scanf("%d", &br);
	} while (br <= 0);

	for (int i = 0; i < n; i++) {
		printf("a[%d]=",i);
		scanf("%d", &nizA[i]);
		if (nizA[i] == br) {
			brojac++;
		}
	}
	
	printf("Broj %d se pojavljuje %d puta", br, brojac);
	return 0;
}