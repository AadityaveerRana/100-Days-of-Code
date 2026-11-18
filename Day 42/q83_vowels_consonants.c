// Q83: Count vowels and consonants in a string
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof s, stdin);
    int v = 0, c = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha((unsigned char)s[i])) {
            char ch = tolower((unsigned char)s[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
            else c++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}
