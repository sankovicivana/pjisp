/*
Napisati program kojim se za celobrojnu vrednost n izračunava njegov
faktorijel.
n! = 1 ⋅ 2 ⋅ 3 ⋅ . . . ⋅ n
*/



#include<stdio.h>
#include<math.h>

int main() {
	
	int n;
	int f = 1;
	
	do {
		printf("Unesite n:\n");
		scanf("%d", &n);
	} while (n < 0);
	
	for(int i=1; i<=n; i++) {
		f*=i;
	}
	printf("F = %d", f);
	
	return 0;
}