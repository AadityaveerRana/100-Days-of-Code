// Q73: Sum of each row, stored in an array
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    long long rowSum[r];
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            int x;
            scanf("%d", &x);
            rowSum[i] += x;
        }
    }
    for (int i = 0; i < r; i++) printf("Sum of row %d: %lld\n", i + 1, rowSum[i]);
    return 0;
}
