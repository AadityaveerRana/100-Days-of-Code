// Q87: Count spaces, digits and special characters
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof s, stdin);
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        unsigned char ch = s[i];
        if (ch == ' ') spaces++;
        else if (isdigit(ch)) digits++;
        else if (!isalpha(ch)) special++;
    }
    printf("Spaces: %d\nDigits: %d\nSpecial characters: %d\n", spaces, digits, special);
    return 0;
}
