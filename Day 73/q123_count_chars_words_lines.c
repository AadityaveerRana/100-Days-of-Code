// Q123: Count characters, words and lines in a text file
#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter file name: ");
    scanf("%99s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open %s\n", filename);
        return 1;
    }
    int ch, prev = '\n', chars = 0, words = 0, lines = 0, inWord = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) inWord = 0;
        else if (!inWord) { inWord = 1; words++; }
        prev = ch;
    }
    if (chars > 0 && prev != '\n') lines++;      // last line without newline
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
