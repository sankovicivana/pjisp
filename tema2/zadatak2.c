/*
Napisati program kojim se za zadato x izračunava f(x) po formuli:
*/
#include <stdio.h>
#include <math.h>

int main(){
	
	int x;
	float y;
	
	printf("Unesi x:");
	scanf("%d", &x);
	
	if (x < 0) {
		y = -7;
	} else if (x < 1 && x >= 0) {
		y = pow(x, 1/4) + 4;
	} else if (x >= 1 && x < 13) {
		y = 2*sqrt(x) - 5;
	} else {
		y = pow(x,2) / 9;
	}
	
	printf("f(x) = %.2f", y);
	
	return 0;
}