// Q140: Struct with an enum Gender - print the person's gender
#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;
    int g;
    printf("Enter name: ");
    scanf(" %49[^\n]", p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", &g);
    p.gender = (enum Gender)g;

    const char *names[] = {"Male", "Female", "Other"};
    printf("\nName: %s\nAge: %d\nGender: %s\n", p.name, p.age,
           (g >= 0 && g <= 2) ? names[p.gender] : "Unknown");
    return 0;
}
