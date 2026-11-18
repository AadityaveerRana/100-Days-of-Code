// Q76: Check if a matrix is symmetric (must be square)
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &m[i][j]);
    int symmetric = (r == c);
    for (int i = 0; symmetric && i < r; i++)
        for (int j = 0; j < i; j++)
            if (m[i][j] != m[j][i]) { symmetric = 0; break; }
    printf(symmetric ? "Symmetric\n" : "Not Symmetric\n");
    return 0;
}
