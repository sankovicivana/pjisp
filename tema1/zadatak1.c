#include <stdio.h>
#include <math.h>
/*
Izračunati površinu trougla upotrebom Heronovog obrasca.
• a = 2cm
• b = 4cm
• c = 5cm
*/

int main()
{

  float a = 2.0;
  float b = 4.0;
  float c = 5.0;
  float s, P;

  s = (a + b + c) / 2;
  P = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("P = %f\n", P);

  return 0;
}