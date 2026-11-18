// Q69: Second largest (distinct) element; prints -1 if there is none
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long first = LLONG_MIN, second = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > first) { second = first; first = a[i]; }
        else if (a[i] > second && a[i] < first) second = a[i];
    }
    if (second == LLONG_MIN) printf("-1\n");
    else printf("%lld\n", second);
    return 0;
}
