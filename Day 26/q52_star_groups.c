// Q52: Print groups of stars (1, 3, 5, 3, 1), one star per line,
// with a blank line between groups.
#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int g = sizeof(groups) / sizeof(groups[0]);
    for (int i = 0; i < g; i++) {
        for (int k = 0; k < groups[i]; k++) printf("*\n");
        if (i < g - 1) printf("\n");
    }
    return 0;
}
