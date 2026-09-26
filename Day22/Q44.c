/*
Q44: Write a program to find the sum of the series:
*/

#include <stdio.h>

int main() {
    int n;
    float sum = 1.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum = sum + numerator / denominator;
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}