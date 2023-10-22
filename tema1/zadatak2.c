
#include <stdio.h>
#include <math.h>
/*
Proširiti Zadatak 1 tako da se vrednosti stranica trougla unose sa
tastature. Prikaz rezultata površine trougla zaokružiti na dve decimale.
*/


int main()
{

  float a;
  float b;
  float c;
  float s, P;
  
  printf("Unesi a:");
  scanf("%f", &a);
  
  printf("Unesi b:");
  scanf("%f", &b);
    
  printf("Unesi c:");
  scanf("%f", &c);
  
  s = (a + b + c) / 2;
  P = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("P = %.2f\n", P);

  return 0;
}