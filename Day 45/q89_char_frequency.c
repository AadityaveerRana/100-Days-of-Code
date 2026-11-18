// Q89: Frequency of a given character in a string
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], ch;
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    scanf(" %c", &ch);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == ch) count++;
    printf("'%c' occurs %d time(s)\n", ch, count);
    return 0;
}
