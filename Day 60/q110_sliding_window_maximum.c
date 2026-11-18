// Q110: Maximum of each window of size k - O(n) using a monotonic deque of indices
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    int dq[n], front = 0, back = 0;      // dq holds indices, values decreasing
    for (int i = 0; i < n; i++) {
        if (front < back && dq[front] <= i - k) front++;          // out of window
        while (front < back && a[dq[back - 1]] <= a[i]) back--;   // smaller values useless
        dq[back++] = i;
        if (i >= k - 1) printf("%d ", a[dq[front]]);
    }
    printf("\n");
    return 0;
}
