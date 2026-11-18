// Q92: First repeating lowercase alphabet in a string
// (the first character, scanning left to right, that has already been seen)
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof s, stdin);
    int seen[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (seen[s[i] - 'a']) {
                printf("%c\n", s[i]);
                return 0;
            }
            seen[s[i] - 'a'] = 1;
        }
    }
    printf("No repeating character\n");
    return 0;
}
