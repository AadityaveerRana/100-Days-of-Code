// Q121: Create info.txt in write mode and store name and age with fprintf()
#include <stdio.h>

int main() {
    char name[100];
    int age;
    printf("Enter name: ");
    scanf(" %99[^\n]", name);
    printf("Enter age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return 1;
    }
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);
    fclose(fp);
    printf("Data successfully saved to info.txt\n");
    return 0;
}
