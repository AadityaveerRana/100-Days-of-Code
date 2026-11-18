// Q65: Binary search in a sorted array (prints 0-based index, or -1)
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    int lo = 0, hi = n - 1, idx = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == key) { idx = mid; break; }
        else if (a[mid] < key) lo = mid + 1;
        else hi = mid - 1;
    }
    printf("%d\n", idx);
    return 0;
}
