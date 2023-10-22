/*
Napisati program koji ispisuje string obrnutim redosledom od unetog.
• Koristiti funkciju strlen

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Unesite string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    
    // Uklanjamo prelazak u novi red iz unosa (ako postoji)
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    printf("Obrnuti string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
