// Q125: Append a new line of text to an existing file (append mode)
#include <stdio.h>

int main() {
    char filename[100], text[500];
    printf("Enter file name: ");
    scanf("%99s", filename);
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: could not open %s\n", filename);
        return 1;
    }
    printf("Enter text to append: ");
    scanf(" %499[^\n]", text);
    fprintf(fp, "%s\n", text);
    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}
