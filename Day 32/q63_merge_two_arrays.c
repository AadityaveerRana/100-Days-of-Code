// Q63: Merge two arrays (second array appended after the first)
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    int c[m + n];
    for (int i = 0; i < m; i++) c[i] = a[i];
    for (int i = 0; i < n; i++) c[m + i] = b[i];
    for (int i = 0; i < m + n; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
