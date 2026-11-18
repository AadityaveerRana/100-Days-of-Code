// Q74: Transpose of a matrix
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &m[i][j]);
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}
