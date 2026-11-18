// Q79: Diagonal traversal of a matrix.
// Each diagonal (i + j = const) is printed on its own line,
// moving from top-right to bottom-left.
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &m[i][j]);
    for (int s = 0; s <= r + c - 2; s++) {
        for (int i = 0; i < r; i++) {
            int j = s - i;
            if (j >= 0 && j < c) printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
