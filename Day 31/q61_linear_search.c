// Q61: Linear search (prints 0-based index, or -1 if not found)
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) { idx = i; break; }
    }
    printf("%d\n", idx);
    return 0;
}
