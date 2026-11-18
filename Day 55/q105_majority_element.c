// Q105: Majority element (> n/2 times) using Boyer-Moore voting - O(n), O(1) space
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int candidate = 0, votes = 0;
    for (int i = 0; i < n; i++) {
        if (votes == 0) { candidate = a[i]; votes = 1; }
        else if (a[i] == candidate) votes++;
        else votes--;
    }
    int count = 0;                       // verify the candidate
    for (int i = 0; i < n; i++)
        if (a[i] == candidate) count++;
    printf("%d\n", count > n / 2 ? candidate : -1);
    return 0;
}
