// Q64: Digit that occurs the most times in an integer
#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);
    if (num < 0) num = -num;
    int count[10] = {0};
    if (num == 0) count[0] = 1;
    while (num > 0) {
        count[num % 10]++;
        num /= 10;
    }
    int best = 0;
    for (int d = 1; d < 10; d++)
        if (count[d] > count[best]) best = d;
    printf("%d (occurs %d times)\n", best, count[best]);
    return 0;
}
