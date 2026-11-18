// Q102: Index of the ceil of x in a sorted array (first occurrence) - O(log n)
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    int lo = 0, hi = n - 1, ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] >= x) { ans = mid; hi = mid - 1; }
        else lo = mid + 1;
    }
    printf("%d\n", ans);
    return 0;
}
