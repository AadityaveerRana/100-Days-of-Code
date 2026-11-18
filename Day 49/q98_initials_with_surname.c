// Q98: Initials with the surname in full (e.g. "Rahul Kumar Sharma" -> R.K. Sharma)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    int n = strlen(s);
    while (n > 0 && s[n - 1] == ' ') s[--n] = '\0';   // trim trailing spaces
    int lastSpace = -1;
    for (int i = 0; i < n; i++)
        if (s[i] == ' ') lastSpace = i;
    // initials of every word before the surname
    for (int i = 0; i < lastSpace; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            printf("%c.", toupper((unsigned char)s[i]));
    }
    if (lastSpace >= 0) printf(" ");
    printf("%s\n", s + lastSpace + 1);
    return 0;
}
