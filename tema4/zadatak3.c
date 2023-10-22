#include <stdio.h>

int main() {
    char str[1000];
    char karakter;
    int brojPojavljivanja = 0;

    printf("Unesite string: ");
    fgets(str, sizeof(str), stdin);

    printf("Unesite karakter: ");
    scanf("%c", &karakter);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == karakter) {
            brojPojavljivanja++;
        }
    }

    printf("Karakter '%c' se pojavljuje %d puta u stringu.\n", karakter, brojPojavljivanja);

    return 0;
}
