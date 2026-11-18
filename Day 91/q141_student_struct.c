// Q141: Structure Student (name, roll_no, marks) - read and print one student
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter name: ");
    scanf(" %49[^\n]", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\nName: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}
