// Q122: Read info.txt with fgets() and print every line until EOF
#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open info.txt\n");
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof line, fp) != NULL) printf("%s", line);
    fclose(fp);
    return 0;
}
