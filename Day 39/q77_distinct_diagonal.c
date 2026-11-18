// Q77: Check if the elements on the main diagonal are distinct
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%d", &m[i][j]);
    int distinct = 1;
    for (int i = 0; i < n && distinct; i++)
        for (int j = i + 1; j < n; j++)
            if (m[i][i] == m[j][j]) { distinct = 0; break; }
    printf(distinct ? "Distinct\n" : "Not Distinct\n");
    return 0;
}
