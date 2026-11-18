// Q57: Sum of array elements
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    long long sum = 0;
    for (int i = 0; i < n; i++) { scanf("%d", &a[i]); sum += a[i]; }
    printf("%lld\n", sum);
    return 0;
}
