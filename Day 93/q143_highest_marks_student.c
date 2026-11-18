// Q143: Find and print the student with the highest marks
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("Student %d - enter name, roll no, marks: ", i + 1);
        scanf(" %49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }
    int top = 0;
    for (int i = 1; i < n; i++)
        if (s[i].marks > s[top].marks) top = i;
    printf("\nTop student:\nName: %s\nRoll No: %d\nMarks: %.2f\n",
           s[top].name, s[top].roll_no, s[top].marks);
    return 0;
}
