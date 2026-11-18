// Q66: Insert an element into a sorted array at the right position
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    int i = n - 1;
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    for (int k = 0; k <= n; k++) printf("%d ", a[k]);
    printf("\n");
    return 0;
}
