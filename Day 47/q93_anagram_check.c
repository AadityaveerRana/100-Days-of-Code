// Q93: Check if two strings are anagrams (case-insensitive)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[1000], b[1000];
    scanf("%s %s", a, b);
    int freq[256] = {0};
    if (strlen(a) != strlen(b)) {
        printf("Not Anagram\n");
        return 0;
    }
    for (int i = 0; a[i]; i++) freq[tolower((unsigned char)a[i])]++;
    for (int i = 0; b[i]; i++) freq[tolower((unsigned char)b[i])]--;
    int ok = 1;
    for (int i = 0; i < 256; i++)
        if (freq[i] != 0) { ok = 0; break; }
    printf(ok ? "Anagram\n" : "Not Anagram\n");
    return 0;
}
