// Q94: Find the longest word in a sentence
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    char longest[1000] = "", word[1000];
    int i = 0, n = strlen(s);
    while (i < n) {
        while (i < n && s[i] == ' ') i++;
        int k = 0;
        while (i < n && s[i] != ' ') word[k++] = s[i++];
        word[k] = '\0';
        if (k > (int)strlen(longest)) strcpy(longest, word);
    }
    printf("%s\n", longest);
    return 0;
}
