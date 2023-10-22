/*
Napisati C program koji računa sumu prvih n prirodnih brojeva, pri čemu
se n zadaje na početku programa.
*/


#include<stdio.h>

int main() {
	
	int n;
	int s = 0;
	printf("Unesi n:");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++) {
		s+=i;
	}
	
	printf("S = %d", s);
	
	return 0;
}