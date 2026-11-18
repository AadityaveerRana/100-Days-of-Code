// Q142: Store details of 5 students in an array of structures and print all
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        printf("Student %d - enter name, roll no, marks: ", i + 1);
        scanf(" %49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }
    printf("\n%-15s %-8s %-6s\n", "Name", "Roll No", "Marks");
    for (int i = 0; i < 5; i++)
        printf("%-15s %-8d %-6.2f\n", s[i].name, s[i].roll_no, s[i].marks);
    return 0;
}
