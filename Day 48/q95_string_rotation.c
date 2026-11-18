// Q95: Check if one string is a rotation of another
#include <stdio.h>
#include <string.h>

int main() {
    char a[500], b[500], doubled[1000];
    scanf("%s %s", a, b);
    if (strlen(a) != strlen(b)) {
        printf("Not a rotation\n");
        return 0;
    }
    strcpy(doubled, a);
    strcat(doubled, a);
    printf(strstr(doubled, b) ? "Rotation\n" : "Not a rotation\n");
    return 0;
}
