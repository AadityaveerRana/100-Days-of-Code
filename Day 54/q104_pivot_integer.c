// Q104: Pivot integer x where sum(1..x) == sum(x..n) - O(1)
// sum(1..x) = x(x+1)/2 and sum(x..n) = n(n+1)/2 - x(x-1)/2
// Equating gives x^2 = n(n+1)/2, so x must be a perfect square root.
#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long total = n * (n + 1) / 2;
    long long x = (long long)sqrtl((long double)total);
    while (x * x > total) x--;
    while ((x + 1) * (x + 1) <= total) x++;
    printf("%lld\n", x * x == total ? x : -1);
    return 0;
}
