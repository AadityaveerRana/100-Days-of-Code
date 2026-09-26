/*
Q41: Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>

int main() {
    int n, original, first, last, power = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    last = original % 10;

    while (original >= 10) {
        original = original / 10;
        power = power * 10;
    }

    first = original;

    middle = n % power;
    middle = middle / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}