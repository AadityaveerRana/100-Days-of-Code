// Q60: Count positive, negative and zero elements
#include <stdio.h>

int main() {
    int n, pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > 0) pos++;
        else if (x < 0) neg++;
        else zero++;
    }
    printf("Positive: %d\nNegative: %d\nZero: %d\n", pos, neg, zero);
    return 0;
}
