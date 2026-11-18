// Q144: Function that accepts a structure as a parameter and prints its members
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;
    printf("Enter name, roll no, marks: ");
    scanf(" %49s %d %f", s.name, &s.roll_no, &s.marks);
    printf("\n");
    printStudent(s);
    return 0;
}
