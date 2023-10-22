/* 
Jedan radnik određeni posao uradi za M dana, a drugi radnik isti posao
uradi za N dana. Napisati program kojim se određuje za koliko dana bi taj
posao bio završen ako bi radili zajedno. Vrednosti M i N se unose sa
tastature.
*/

#include <stdio.h>

int main() {
 
    int M, N, zajedno_dana;
    
    printf("Unesite broj dana koje je prvi radnik potreban da zavrsi posao: ");
    scanf("%d", &M);
    
    printf("Unesite broj dana koje je drugi radnik potreban da zavrsi posao: ");
    scanf("%d", &N);
    
    zajedno_dana = 1 / ((1.0 / M) + (1.0 / N));
   
    printf("Posao bi bio zavrsen za %d dana ako bi radili zajedno.\n", zajedno_dana);
    
    return 0;
}
