/* 
Napisati program koji učitava vrednosti promenljivih a i b, a zatim rešava
jednačinu:
ax + b = 0
• Pokriti sve slučajeve za različite kombinacije vrednosti a i b
*/


#include <stdio.h>
#include <math.h>

int main() {
	
	double a, b;
	double x;

	printf("a=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf", &b);

	if (a == 0 && b == 0) {
		printf("jednacina ima beskonacno mnogo resenja\n");

	} else if (a == 0 && b != 0) {
		printf("Jednacina nema resenja\n");		

	} else {
		x = -b / a;
		printf("x=%.2lf\n", x);
	}
	return 0;
}