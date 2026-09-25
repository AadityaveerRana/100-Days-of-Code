/*
Q6: Write a program to swap two numbers using a third variable.
*/

#include <stdio.h>

int main()
{
    int a, b, x;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    a = b;
    b = x;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}