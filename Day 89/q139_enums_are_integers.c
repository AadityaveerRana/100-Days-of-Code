// Q139: Show that enums store integers
#include <stdio.h>

enum Size { SMALL = 5, MEDIUM = 10, LARGE = 20 };

int main() {
    enum Size s = MEDIUM;
    printf("SMALL  = %d\n", SMALL);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("LARGE  = %d\n", LARGE);
    printf("sizeof(enum Size) = %zu bytes (same as int: %zu)\n", sizeof(s), sizeof(int));
    printf("MEDIUM + LARGE = %d  (arithmetic works because enums are integers)\n", MEDIUM + LARGE);
    return 0;
}
