// Q126: Check whether a file exists; display its content if it does
#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter file name: ");
    scanf("%99s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: file '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }
    int ch;
    while ((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);
    return 0;
}
