// Q118: Missing number from 0..n in an array of size n
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long expected = (long long)n * (n + 1) / 2, actual = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        actual += x;
    }
    printf("%lld\n", expected - actual);
    return 0;
}
