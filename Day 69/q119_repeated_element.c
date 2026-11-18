// Q119: Find the repeated element in a single pass.
// Assumes non-negative values below 1,000,000 (marked in a "seen" table).
#include <stdio.h>

static char seen[1000000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (seen[x]) {
            printf("%d\n", x);
            return 0;
        }
        seen[x] = 1;
    }
    printf("-1\n");
    return 0;
}
