// Q145: Return a structure containing the top student's details from a function
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++)
        if (s[i].marks > top.marks) top = s[i];
    return top;
}

int main() {
    int n;
    printf("Number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("Student %d - enter name, roll no, marks: ", i + 1);
        scanf(" %49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }
    struct Student top = findTopStudent(s, n);
    printf("\nTop student:\nName: %s\nRoll No: %d\nMarks: %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}
