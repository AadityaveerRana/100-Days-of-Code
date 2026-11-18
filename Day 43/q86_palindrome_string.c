// Q86: Check if a string is a palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    int n = strlen(s), ok = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--)
        if (s[i] != s[j]) { ok = 0; break; }
    printf(ok ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}
