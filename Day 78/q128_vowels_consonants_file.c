// Q128: Count vowels and consonants in a text file (digits/specials ignored)
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
    int ch, vowels = 0, consonants = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
