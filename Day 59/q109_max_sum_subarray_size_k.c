// Q109: Maximum sum of all subarrays of size k (sliding window)
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("-1\n");
        return 0;
    }
    long long window = 0, best;
    for (int i = 0; i < k; i++) window += a[i];
    best = window;
    for (int i = k; i < n; i++) {
        window += a[i] - a[i - k];
        if (window > best) best = window;
    }
    printf("%lld\n", best);
    return 0;
}
