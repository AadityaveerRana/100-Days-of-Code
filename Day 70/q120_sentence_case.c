// Q120: Convert a string to sentence case
// (first letter of every sentence uppercase, everything else lowercase)
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[2000];
    fgets(s, sizeof s, stdin);
    int newSentence = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];
        if (isalpha(c)) {
            s[i] = newSentence ? toupper(c) : tolower(c);
            newSentence = 0;
        } else if (c == '.' || c == '!' || c == '?') {
            newSentence = 1;
        }
    }
    printf("%s", s);
    return 0;
}
