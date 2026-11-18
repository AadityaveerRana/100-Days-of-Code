// Q113: Kth smallest element in an array
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y) {
    int a = *(const int *)x, b = *(const int *)y;
    return (a > b) - (a < b);
}

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k < 1 || k > n) {
        printf("-1\n");
        return 0;
    }
    qsort(a, n, sizeof(int), cmp);
    printf("%d\n", a[k - 1]);
    return 0;
}
