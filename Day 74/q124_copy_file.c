// Q124: Copy a source file to a destination file using fgetc() and fputc()
#include <stdio.h>

int main() {
    char src[100], dst[100];
    printf("Enter source file: ");
    scanf("%99s", src);
    printf("Enter destination file: ");
    scanf("%99s", dst);

    FILE *in = fopen(src, "r");
    if (in == NULL) {
        printf("Error: could not open %s\n", src);
        return 1;
    }
    FILE *out = fopen(dst, "w");
    if (out == NULL) {
        printf("Error: could not create %s\n", dst);
        fclose(in);
        return 1;
    }
    int ch;
    while ((ch = fgetc(in)) != EOF) fputc(ch, out);
    fclose(in);
    fclose(out);
    printf("File copied successfully.\n");
    return 0;
}
