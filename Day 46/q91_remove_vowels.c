// Q91: Remove all vowels from a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower((unsigned char)s[i]);
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
            putchar(s[i]);
    }
    printf("\n");
    return 0;
}
