// Q101: First and last occurrence of target in a sorted array - O(log n)
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &target);

    int first = -1, last = -1;
    int lo = 0, hi = n - 1;
    while (lo <= hi) {                       // leftmost position
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == target) { first = mid; hi = mid - 1; }
        else if (a[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    lo = 0; hi = n - 1;
    while (lo <= hi) {                       // rightmost position
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == target) { last = mid; lo = mid + 1; }
        else if (a[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    printf("%d %d\n", first, last);
    return 0;
}
