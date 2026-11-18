// Q96: Reverse each word of a sentence, keeping the word order
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    int n = strlen(s), i = 0;
    while (i < n) {
        if (s[i] == ' ') { i++; continue; }
        int start = i;
        while (i < n && s[i] != ' ') i++;
        for (int l = start, r = i - 1; l < r; l++, r--) {
            char t = s[l]; s[l] = s[r]; s[r] = t;
        }
    }
    printf("%s\n", s);
    return 0;
}
