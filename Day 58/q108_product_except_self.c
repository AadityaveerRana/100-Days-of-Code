// Q108: Product of array except self - O(n), no division
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long ans[n];
    long long prefix = 1;
    for (int i = 0; i < n; i++) { ans[i] = prefix; prefix *= a[i]; }
    long long suffix = 1;
    for (int i = n - 1; i >= 0; i--) { ans[i] *= suffix; suffix *= a[i]; }
    for (int i = 0; i < n; i++) printf("%lld ", ans[i]);
    printf("\n");
    return 0;
}
