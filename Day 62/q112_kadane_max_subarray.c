// Q112: Maximum sum contiguous subarray (Kadane's algorithm)
// Works for all-negative arrays too (returns the least negative element).
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long cur = a[0], best = a[0];
    for (int i = 1; i < n; i++) {
        cur = (a[i] > cur + a[i]) ? a[i] : cur + a[i];
        if (cur > best) best = cur;
    }
    printf("%lld\n", best);
    return 0;
}
