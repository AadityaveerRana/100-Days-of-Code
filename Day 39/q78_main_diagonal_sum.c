// Q78: Sum of main diagonal elements of a square matrix
#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    scanf("%d", &n);
    int m[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%d", &m[i][j]);
    for (int i = 0; i < n; i++) sum += m[i][i];
    printf("%lld\n", sum);
    return 0;
}
