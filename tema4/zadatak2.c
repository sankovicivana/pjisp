/*
Napisati program koji proverava da li je uneti string palindrom. Ukoliko je
string palindrom, u pitanju su reči ili rečenice koje se mogu isto čitati s
leva na desno i obrnuto.
• Napraviti program tako da prvo radi za reči koje su palindromi (na
primer, "rotor")
• Proširiti funkcionalnost tako da je moguće isto uraditi i za skup
reči (na primer, "Ana voli Milovana")
• Ignorisati razmake i odgovarajuća mala i velika slova smatrati
istim prilikom provere
• Proširiti funkcionalnost tako da je moguće isto uraditi i za rečenice
(na primer, "Ana voli Milovana.")
• Ignorisati znake interpunkcije
*/
#include <stdio.h>
#include <string.h>
#define MAX 256

int palindrom(char[], int);
void removeSpace(char[], char[]);
void toUpperCase(char[]);

int main() {
    char str[MAX];
    char s1[MAX];

    printf("Unesite string:\n");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    removeSpace(str, s1);
    toUpperCase(s1);

    if (palindrom(s1, strlen(s1))) {
        printf("\"%s\" je palindrom\n", s1);
    } else {
        printf("\"%s\" nije palindrom\n", s1);
    }

    return 0;
}

int palindrom(char s[], int n) {
    int i;

    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

void removeSpace(char s[], char s1[]) {
    int i, j = 0;

    for (i = 0; i < strlen(s); i++) {
        if (s[i] != ' ') {
            s1[j++] = s[i];
        }
    }
    s1[j] = '\0';
}

void toUpperCase(char s[]) {
    int i;

    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        }
    }
}

