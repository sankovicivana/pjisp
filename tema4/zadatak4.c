#include <stdio.h>

int main() {
    char str[100];
    printf("Unesite string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = str[i] - 32; // Pretvori mala slova u velika
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Pretvori velika slova u mala
        }
    }

    printf("Transformisani string: %s", str);

    return 0;
}
