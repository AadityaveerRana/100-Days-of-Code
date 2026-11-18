// Q72: Sum of all elements in a matrix
#include <stdio.h>

int main() {
    int r, c;
    long long sum = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            int x;
            scanf("%d", &x);
            sum += x;
        }
    printf("%lld\n", sum);
    return 0;
}
