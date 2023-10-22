/*
Napisati program kojim se štampaju svi trocifreni Armstrongovi brojevi.
Broj je Armstrongov ako je jednak zbiru kubova svojih cifara.

*/

#include <stdio.h>
#include <math.h>

int main(){
	int j, d, s;
    
	for (int i= 100 ; i < 1000; i++){

		j = i % 10;
		d = ( i / 10 ) % 10;
		s = i / 100;

		if (i == (pow(j,3)+pow(d,3) + pow(s,3))){
			printf("Broj %d je amstrongov. \n", i);
		}
	}
	
	
	return 0;
}