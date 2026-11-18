// Q130: Store student records (name, roll no, marks) with fprintf(),
// then read them back with fscanf() and display them.
#include <stdio.h>

int main() {
    int n;
    printf("Number of students: ");
    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create students.txt\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        char name[50];
        int roll;
        float marks;
        printf("Student %d (name roll marks): ", i + 1);
        scanf("%49s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open students.txt\n");
        return 1;
    }
    char name[50];
    int roll;
    float marks;
    printf("\n%-15s %-8s %-6s\n", "Name", "Roll No", "Marks");
    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3)
        printf("%-15s %-8d %-6.2f\n", name, roll, marks);
    fclose(fp);
    return 0;
}
