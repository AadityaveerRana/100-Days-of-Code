// Q97: Print the initials of a name (e.g. "Rahul Kumar Sharma" -> R.K.S.)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            printf("%c.", toupper((unsigned char)s[i]));
    }
    printf("\n");
    return 0;
}
