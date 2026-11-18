// Q111: First negative integer in each window of size k (0 if none)
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    int next = 0;                        // index of next negative candidate
    for (int i = 0; i + k <= n; i++) {
        if (next < i) next = i;
        while (next < n && a[next] >= 0) next++;
        if (next < i + k) printf("%d ", a[next]);
        else printf("0 ");
    }
    printf("\n");
    return 0;
}
