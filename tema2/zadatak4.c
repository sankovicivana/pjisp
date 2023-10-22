/*
Tri tačke su zadate koordinatama u ravni. Napisati program kojim se
izračunava površina paralelograma čiji su vrhovi date tačke.
• Obratiti pažnju na proveru da li tačke u ravni formiraju trougao,
odnosno paralelogram
*/

#include<stdio.h>
#include<math.h>

int main() {
	
	float Ax, Ay,Bx,By,Cx,Cy;
	float p, s;
	float a,b,c;
	
	printf("Unesi x1, y1: ");
	scanf("%f,%f", &Ax, &Ay);
	
	printf("Unesi x2, y2: ");
	scanf("%f,%f", &Bx, &By);
	
	printf("Unesi x3, y3: ");
	scanf("%f,%f", &Cx, &Cy);
	
	a = sqrt(pow(Ax - Bx, 2) + pow(Ay - By,2));
	b = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));
	c = sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2));
	
	if ((a+b > c) && (a+c > b) && (b+c > a)) {
		printf("trougao.");
	} else {
		printf("NIje trougao.");
	}

	s = (a+b+c)/2;
	p = 2*(sqrt(s*(s-a)*(s-b)*(s-c)));
	printf("Povrsina je %.2f", p);
	return 0;
}