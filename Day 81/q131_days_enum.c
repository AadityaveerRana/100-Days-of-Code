// Q131: Enum for days (SUNDAY to SATURDAY); print each day with its value
#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    const char *names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
                           "THURSDAY", "FRIDAY", "SATURDAY"};
    for (int d = SUNDAY; d <= SATURDAY; d++) printf("%s = %d\n", names[d], d);
    return 0;
}
